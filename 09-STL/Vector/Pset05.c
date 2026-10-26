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

int greater_than_5(int x)
{
    return x > 5;
}

int is_even(int x)
{
    return x % 2 == 0;
}

int main() {
    int init[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Vector v = vector_from_array(init, 9);
    
    int it = 0;
    while (it < v.size && !(5 < v.data[it]))
        it++;
    printf("upper_bound of 5: %d at position %d\n", v.data[it], it);
    
    Vector dest = vector_create(9, 0);
    for (int i = 0; i < v.size; i++)
        dest.data[i] = v.data[i];
    
    printf("copy: ");
    for (int i = 0; i < dest.size; i++) {
        printf("%d ", dest.data[i]);
    }
    printf("\n");
    
    int it2 = 0;
    while (it2 < v.size && !greater_than_5(v.data[it2]))
        it2++;
    printf("find_if first element > 5: %d at position %d\n", v.data[it2], it2);
    
    int cnt = 0;
    for (int i = 0; i < v.size; i++)
        if (v.data[i] == 3)
            cnt++;
    printf("count of 3: %d\n", cnt);
    
    int cnt_if = 0;
    for (int i = 0; i < v.size; i++)
        if (is_even(v.data[i]))
            cnt_if++;
    printf("count of even numbers: %d\n", cnt_if);
    
    Vector v2 = {NULL, 0, 0};
    vector_reserve(&v2, 10);
    printf("capacity after reserve(10): %d\n", v2.capacity);
    
    int init3[] = {1, 2, 3, 4, 5};
    Vector v3 = vector_from_array(init3, 5);
    for (int i = 0; i < v3.size; i++)
        if (v3.data[i] == 3)
            v3.data[i] = 99;
    
    printf("replace 3 with 99: ");
    for (int i = 0; i < v3.size; i++) {
        printf("%d ", v3.data[i]);
    }
    printf("\n");
    
    int ia[] = {1, 3, 5, 7, 9};
    int ib[] = {2, 4, 6, 8, 10};
    Vector a = vector_from_array(ia, 5);
    Vector b = vector_from_array(ib, 5);
    Vector result = vector_create(10, 0);
    
    int x = 0, y = 0, k = 0;
    while (x < a.size && y < b.size) {
        if (b.data[y] < a.data[x])
            result.data[k++] = b.data[y++];
        else
            result.data[k++] = a.data[x++];
    }
    while (x < a.size)
        result.data[k++] = a.data[x++];
    while (y < b.size)
        result.data[k++] = b.data[y++];
    
    printf("merge: ");
    for (int i = 0; i < result.size; i++) {
        printf("%d ", result.data[i]);
    }
    printf("\n");
    
    vector_free(&v);
    vector_free(&dest);
    vector_free(&v2);
    vector_free(&v3);
    vector_free(&a);
    vector_free(&b);
    vector_free(&result);
    return 0;
}
