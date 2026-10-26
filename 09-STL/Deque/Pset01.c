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

void deque_push_front(Vector *d, int value)
{
    vector_insert(d, 0, value);
}

void deque_pop_front(Vector *d)
{
    vector_erase(d, 0, 1);
}

int main() {
    int init[] = {10, 20, 30, 40, 50};
    Vector d = vector_from_array(init, 5);
    
    printf("Original: ");
    for (int i = 0; i < d.size; i++) {
        printf("%d\t", d.data[i]);
    }
    printf("\n");
    
    vector_push_back(&d, 60);
    deque_push_front(&d, 5);
    
    printf("After push_back and push_front: ");
    for (int i = 0; i < d.size; i++) {
        printf("%d\t", d.data[i]);
    }
    printf("\n");
    
    vector_pop_back(&d);
    deque_pop_front(&d);
    
    printf("After pop_back and pop_front: ");
    for (int i = 0; i < d.size; i++) {
        printf("%d\t", d.data[i]);
    }
    printf("\n");
    
    printf("Front: %d\n", d.data[0]);
    printf("Back: %d\n", d.data[d.size - 1]);
    printf("Size: %d\n", d.size);
    
    d.data[2] = 100;
    printf("After modifying index 2: ");
    for (int i = 0; i < d.size; i++) {
        printf("%d\t", d.data[i]);
    }
    printf("\n");
    
    vector_insert(&d, 2, 25);
    printf("After insert at position 2: ");
    for (int i = 0; i < d.size; i++) {
        printf("%d\t", d.data[i]);
    }
    printf("\n");
    
    vector_erase(&d, 3, 4);
    printf("After erase position 3: ");
    for (int i = 0; i < d.size; i++) {
        printf("%d\t", d.data[i]);
    }
    printf("\n");
    
    Vector d2 = vector_create(4, 7);
    printf("d2 (size 4, value 7): ");
    for (int i = 0; i < d2.size; i++) {
        printf("%d\t", d2.data[i]);
    }
    printf("\n");
    
    Vector temp = d;
    d = d2;
    d2 = temp;
    printf("d after swap: ");
    for (int i = 0; i < d.size; i++) {
        printf("%d\t", d.data[i]);
    }
    printf("\n");
    
    vector_clear(&d);
    printf("Size after clear: %d\n", d.size);
    printf("Is empty? %s\n", (d.size == 0 ? "Yes" : "No"));
    
    vector_free(&d);
    vector_free(&d2);
    return 0;
}
