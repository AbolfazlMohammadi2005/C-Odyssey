#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} Vector;

void vector_reserve(Vector *v, int capacity)
{
    if (capacity > v->capacity) {
        v->data = realloc(v->data, capacity * sizeof(int));
        v->capacity = capacity;
    }
}

Vector vector_create(int n, int value)
{
    Vector v = {NULL, 0, 0};
    vector_reserve(&v, n);
    for (int i = 0; i < n; i++)
        v.data[i] = value;
    v.size = n;
    return v;
}

Vector vector_from_array(const int *a, int n)
{
    Vector v = {NULL, 0, 0};
    vector_reserve(&v, n);
    for (int i = 0; i < n; i++)
        v.data[i] = a[i];
    v.size = n;
    return v;
}

void vector_push_back(Vector *v, int value)
{
    if (v->size == v->capacity)
        vector_reserve(v, v->capacity == 0 ? 1 : v->capacity * 2);
    v->data[v->size++] = value;
}

void vector_pop_back(Vector *v)
{
    v->size--;
}

void vector_insert(Vector *v, int pos, int value)
{
    if (v->size == v->capacity)
        vector_reserve(v, v->capacity == 0 ? 1 : v->capacity * 2);
    memmove(&v->data[pos + 1], &v->data[pos], (v->size - pos) * sizeof(int));
    v->data[pos] = value;
    v->size++;
}

void vector_erase(Vector *v, int first, int last)
{
    memmove(&v->data[first], &v->data[last], (v->size - last) * sizeof(int));
    v->size -= last - first;
}

void vector_clear(Vector *v)
{
    v->size = 0;
}

void vector_free(Vector *v)
{
    free(v->data);
    v->data = NULL;
    v->size = 0;
    v->capacity = 0;
}

int main() {
    int init[] = {1, 2, 3, 4, 5};
    Vector v1 = vector_from_array(init, 5);
    
    printf("v1: ");
    for (int i = 0; i < v1.size; i++) {
        printf("%d\t", v1.data[i]);
    }
    printf("\n");
    
    vector_push_back(&v1, 6);
    vector_push_back(&v1, 7);
    
    printf("After push_back: ");
    for (int i = 0; i < v1.size; i++) {
        printf("%d\t", v1.data[i]);
    }
    printf("\n");
    
    vector_pop_back(&v1);
    
    printf("After pop_back: ");
    for (int i = 0; i < v1.size; i++) {
        printf("%d\t", v1.data[i]);
    }
    printf("\n");
    
    printf("First element: %d\n", v1.data[0]);
    printf("Last element: %d\n", v1.data[v1.size - 1]);
    
    Vector r1 = vector_create(4, 0);
    
    printf("r1 (size 4, default 0): ");
    for (int i = 0; i < r1.size; i++) {
        printf("%d\t", r1.data[i]);
    }
    printf("\n");
    
    Vector r2 = vector_create(4, 10);
    
    printf("r2 (size 4, value 10): ");
    for (int i = 0; i < r2.size; i++) {
        printf("%d\t", r2.data[i]);
    }
    printf("\n");
    
    printf("Size of v1: %d\n", v1.size);
    printf("Is v1 empty? %s\n", (v1.size == 0 ? "Yes" : "No"));
    
    vector_clear(&v1);
    printf("Size after clear: %d\n", v1.size);
    printf("Is v1 empty? %s\n", (v1.size == 0 ? "Yes" : "No"));
    
    vector_free(&v1);
    vector_free(&r1);
    vector_free(&r2);
    return 0;
}
