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

int compare_ascending(const void *a, const void *b)
{
    return *(const int *)a - *(const int *)b;
}

int compare_descending(const void *a, const void *b)
{
    return *(const int *)b - *(const int *)a;
}

int main() {
    int init[] = {5, 2, 8, 1, 9, 3, 7, 4, 6};
    Vector v = vector_from_array(init, 9);
    
    qsort(v.data, v.size, sizeof(int), compare_ascending);
    
    printf("Sorted: ");
    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");
    
    qsort(v.data, v.size, sizeof(int), compare_descending);
    
    printf("Descending: ");
    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");
    
    int it_find = 0;
    while (it_find < v.size && v.data[it_find] != 3)
        it_find++;
    if (it_find != v.size) {
        printf("Found 3 at position: %d\n", it_find);
    }
    
    int it_max = 0;
    int it_min = 0;
    for (int i = 1; i < v.size; i++) {
        if (v.data[i] > v.data[it_max]) it_max = i;
        if (v.data[i] < v.data[it_min]) it_min = i;
    }
    printf("Max: %d, Min: %d\n", v.data[it_max], v.data[it_min]);
    
    for (int i = 0; i < 3; i++)
        v.data[i] = 0;
    
    printf("After fill first 3 with 0: ");
    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");
    
    for (int i = 0; i < v.size; i++)
        if (v.data[i] == 0)
            v.data[i] = 99;
    
    printf("After replace 0 with 99: ");
    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");
    
    int init2[] = {10, 20, 30, 40, 50};
    Vector v2 = vector_from_array(init2, 5);
    
    Vector temp = v;
    v = v2;
    v2 = temp;
    
    printf("v after swap: ");
    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }
    printf("\n");
    
    vector_free(&v);
    vector_free(&v2);
    return 0;
}
