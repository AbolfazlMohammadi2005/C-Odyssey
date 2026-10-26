#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int first;
    int second;
} Pair;

typedef struct {
    Pair *data;
    int size;
    int capacity;
} Map;

int map_lower_bound(const Map *m, int key)
{
    int i = 0;
    while (i < m->size && m->data[i].first < key)
        i++;
    return i;
}

int map_find(const Map *m, int key)
{
    int i = map_lower_bound(m, key);
    if (i < m->size && m->data[i].first == key)
        return i;
    return m->size;
}

int *map_at(Map *m, int key)
{
    int i = map_lower_bound(m, key);
    if (i < m->size && m->data[i].first == key)
        return &m->data[i].second;
    if (m->size == m->capacity) {
        m->capacity = m->capacity == 0 ? 1 : m->capacity * 2;
        m->data = realloc(m->data, m->capacity * sizeof(Pair));
    }
    memmove(&m->data[i + 1], &m->data[i], (m->size - i) * sizeof(Pair));
    m->data[i].first = key;
    m->data[i].second = 0;
    m->size++;
    return &m->data[i].second;
}

void map_erase(Map *m, int key)
{
    int i = map_find(m, key);
    if (i != m->size) {
        memmove(&m->data[i], &m->data[i + 1], (m->size - i - 1) * sizeof(Pair));
        m->size--;
    }
}

int main() {
    Map m = {NULL, 0, 0};
    for (int k = 1; k <= 5; k++)
        *map_at(&m, k) = k * 10;
    
    for (int it = 0; it != m.size; it++) {
        printf("%d:%d\n", m.data[it].first, m.data[it].second);
    }
    
    printf("%d\n", *map_at(&m, 3));
    
    *map_at(&m, 3) = 99;
    printf("%d\n", *map_at(&m, 3));
    
    map_erase(&m, 2);
    printf("After erase key 2:\n");
    for (int it = 0; it != m.size; it++) {
        printf("%d:%d\n", m.data[it].first, m.data[it].second);
    }
    
    printf("Size: %d\n", m.size);
    
    if (map_find(&m, 4) != m.size) {
        printf("Key 4 found with value: %d\n", *map_at(&m, 4));
    }
    
    free(m.data);
    return 0;
}
