#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} Set;

int set_lower_bound(const Set *s, int value)
{
    int i = 0;
    while (i < s->size && s->data[i] < value)
        i++;
    return i;
}

int set_upper_bound(const Set *s, int value)
{
    int i = 0;
    while (i < s->size && s->data[i] <= value)
        i++;
    return i;
}

int set_find(const Set *s, int value)
{
    int i = set_lower_bound(s, value);
    if (i < s->size && s->data[i] == value)
        return i;
    return s->size;
}

void set_insert(Set *s, int value)
{
    int i = set_lower_bound(s, value);
    if (i < s->size && s->data[i] == value)
        return;
    if (s->size == s->capacity) {
        s->capacity = s->capacity == 0 ? 1 : s->capacity * 2;
        s->data = realloc(s->data, s->capacity * sizeof(int));
    }
    memmove(&s->data[i + 1], &s->data[i], (s->size - i) * sizeof(int));
    s->data[i] = value;
    s->size++;
}

void set_erase(Set *s, int value)
{
    int i = set_find(s, value);
    if (i != s->size) {
        memmove(&s->data[i], &s->data[i + 1], (s->size - i - 1) * sizeof(int));
        s->size--;
    }
}

int set_count(const Set *s, int value)
{
    return set_find(s, value) != s->size;
}

void set_clear(Set *s)
{
    s->size = 0;
}

int main() {
    Set s = {NULL, 0, 0};
    int init[] = {50, 20, 60, 10, 40, 30, 20, 10};
    for (int i = 0; i < 8; i++)
        set_insert(&s, init[i]);
    
    printf("Original set (sorted, no duplicates): ");
    for (int i = 0; i < s.size; i++) {
        printf("%d\t", s.data[i]);
    }
    printf("\n");
    
    set_insert(&s, 25);
    set_insert(&s, 20);
    
    printf("After insert 25 and 20: ");
    for (int i = 0; i < s.size; i++) {
        printf("%d\t", s.data[i]);
    }
    printf("\n");
    
    set_erase(&s, 40);
    
    printf("After erase 40: ");
    for (int i = 0; i < s.size; i++) {
        printf("%d\t", s.data[i]);
    }
    printf("\n");
    
    printf("Size: %d\n", s.size);
    printf("Is empty? %s\n", (s.size == 0 ? "Yes" : "No"));
    
    if (set_find(&s, 30) != s.size) {
        printf("30 found in set\n");
    }
    
    if (set_count(&s, 100)) {
        printf("100 found\n");
    } else {
        printf("100 not found\n");
    }
    
    printf("Lower bound of 25: %d\n", s.data[set_lower_bound(&s, 25)]);
    printf("Upper bound of 25: %d\n", s.data[set_upper_bound(&s, 25)]);
    
    set_clear(&s);
    printf("Size after clear: %d\n", s.size);
    
    free(s.data);
    return 0;
}
