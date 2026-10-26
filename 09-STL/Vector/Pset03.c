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

typedef struct {
    Vector *data;
    int size;
    int capacity;
} Matrix;

Matrix matrix_create(int rows, int cols, int value)
{
    Matrix m;
    m.data = malloc(rows * sizeof(Vector));
    m.size = rows;
    m.capacity = rows;
    for (int i = 0; i < rows; i++)
        m.data[i] = vector_create(cols, value);
    return m;
}

Matrix matrix_from_vectors(Vector *rows, int n)
{
    Matrix m;
    m.data = malloc(n * sizeof(Vector));
    m.size = n;
    m.capacity = n;
    for (int i = 0; i < n; i++)
        m.data[i] = rows[i];
    return m;
}

void matrix_push_back(Matrix *m, Vector row)
{
    if (m->size == m->capacity) {
        m->capacity = m->capacity == 0 ? 1 : m->capacity * 2;
        m->data = realloc(m->data, m->capacity * sizeof(Vector));
    }
    m->data[m->size++] = row;
}

void matrix_free(Matrix *m)
{
    for (int i = 0; i < m->size; i++)
        vector_free(&m->data[i]);
    free(m->data);
    m->data = NULL;
    m->size = 0;
    m->capacity = 0;
}

int main() {
    int r0[] = {1, 2, 3};
    int r1[] = {4, 5, 6};
    int r2[] = {7, 8, 9};
    Vector init[] = {
        vector_from_array(r0, 3),
        vector_from_array(r1, 3),
        vector_from_array(r2, 3)
    };
    Matrix matrix = matrix_from_vectors(init, 3);
    
    printf("Matrix:\n");
    for (int i = 0; i < matrix.size; i++) {
        for (int j = 0; j < matrix.data[i].size; j++) {
            printf("%d\t", matrix.data[i].data[j]);
        }
        printf("\n");
    }
    
    Matrix rows = matrix_create(3, 4, 0);
    
    printf("\nRows 3x4 with zeros:\n");
    for (int i = 0; i < rows.size; i++) {
        for (int j = 0; j < rows.data[i].size; j++) {
            printf("%d\t", rows.data[i].data[j]);
        }
        printf("\n");
    }
    
    Matrix vec2d = {NULL, 0, 0};
    int a0[] = {1, 2, 3};
    int a1[] = {4, 5};
    int a2[] = {6, 7, 8, 9};
    matrix_push_back(&vec2d, vector_from_array(a0, 3));
    matrix_push_back(&vec2d, vector_from_array(a1, 2));
    matrix_push_back(&vec2d, vector_from_array(a2, 4));
    
    printf("\nJagged array:\n");
    for (int i = 0; i < vec2d.size; i++) {
        for (int j = 0; j < vec2d.data[i].size; j++) {
            printf("%d\t", vec2d.data[i].data[j]);
        }
        printf("\n");
    }
    
    Matrix mat = matrix_create(2, 2, 0);
    mat.data[0].data[0] = 10;
    mat.data[0].data[1] = 20;
    mat.data[1].data[0] = 30;
    mat.data[1].data[1] = 40;
    
    printf("\nManual assignment:\n");
    for (int i = 0; i < mat.size; i++) {
        for (int j = 0; j < mat.data[i].size; j++) {
            printf("%d\t", mat.data[i].data[j]);
        }
        printf("\n");
    }
    
    printf("\nFirst row: ");
    for (int j = 0; j < mat.data[0].size; j++) {
        printf("%d\t", mat.data[0].data[j]);
    }
    printf("\n");
    
    printf("Element at (1,1): %d\n", mat.data[1].data[1]);
    printf("Number of rows: %d\n", mat.size);
    printf("Number of columns in row 0: %d\n", mat.data[0].size);
    
    matrix_free(&matrix);
    matrix_free(&rows);
    matrix_free(&vec2d);
    matrix_free(&mat);
    return 0;
}
