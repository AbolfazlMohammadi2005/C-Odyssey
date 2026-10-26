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
    int init[] = {10, 20, 30, 40, 50};
    Vector v = vector_from_array(init, 5);
    
    printf("Original: ");
    for (int i = 0; i < v.size; i++) {
        printf("%d\t", v.data[i]);
    }
    printf("\n");
    
    vector_insert(&v, 2, 25);
    
    printf("After insert 25 at position 2: ");
    for (int i = 0; i < v.size; i++) {
        printf("%d\t", v.data[i]);
    }
    printf("\n");
    
    vector_erase(&v, 3, 4);
    
    printf("After erase position 3: ");
    for (int i = 0; i < v.size; i++) {
        printf("%d\t", v.data[i]);
    }
    printf("\n");
    
    vector_erase(&v, 1, 3);
    
    printf("After erase positions 1 to 2: ");
    for (int i = 0; i < v.size; i++) {
        printf("%d\t", v.data[i]);
    }
    printf("\n");
    
    vector_free(&v);
    return 0;
}
