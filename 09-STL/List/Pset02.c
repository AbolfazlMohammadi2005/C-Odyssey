#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    int size;
} List;

List list_from_array(const int *a, int n);
void list_insert_before(List *l, Node *pos, int value);
void list_erase(List *l, Node *pos);

void list_push_back(List *l, int value)
{
    list_insert_before(l, NULL, value);
}

void list_push_front(List *l, int value)
{
    list_insert_before(l, l->head, value);
}

void list_insert_before(List *l, Node *pos, int value)
{
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = pos;
    node->prev = pos ? pos->prev : l->tail;
    if (node->prev)
        node->prev->next = node;
    else
        l->head = node;
    if (pos)
        pos->prev = node;
    else
        l->tail = node;
    l->size++;
}

void list_erase(List *l, Node *pos)
{
    if (pos->prev)
        pos->prev->next = pos->next;
    else
        l->head = pos->next;
    if (pos->next)
        pos->next->prev = pos->prev;
    else
        l->tail = pos->prev;
    free(pos);
    l->size--;
}

List list_from_array(const int *a, int n)
{
    List l = {NULL, NULL, 0};
    for (int i = 0; i < n; i++)
        list_push_back(&l, a[i]);
    return l;
}

void list_pop_back(List *l)
{
    list_erase(l, l->tail);
}

void list_pop_front(List *l)
{
    list_erase(l, l->head);
}

Node *list_advance(Node *it, int n)
{
    while (n-- > 0)
        it = it->next;
    return it;
}

void list_clear(List *l)
{
    while (l->head)
        list_erase(l, l->head);
}

void list_print(const List *l)
{
    for (Node *it = l->head; it != NULL; it = it->next) {
        printf("%d\t", it->value);
    }
    printf("\n");
}

void list_merge(List *l, List *other)
{
    Node *first1 = l->head;
    while (first1 != NULL && other->head != NULL) {
        if (other->head->value < first1->value) {
            list_insert_before(l, first1, other->head->value);
            list_erase(other, other->head);
        } else {
            first1 = first1->next;
        }
    }
    while (other->head != NULL) {
        list_push_back(l, other->head->value);
        list_erase(other, other->head);
    }
}

int compare_ints(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

void list_sort(List *l)
{
    int *values = malloc(l->size * sizeof(int));
    int n = 0;
    for (Node *it = l->head; it != NULL; it = it->next)
        values[n++] = it->value;
    qsort(values, n, sizeof(int), compare_ints);
    n = 0;
    for (Node *it = l->head; it != NULL; it = it->next)
        it->value = values[n++];
    free(values);
}

void list_unique(List *l)
{
    Node *it = l->head;
    while (it != NULL && it->next != NULL) {
        if (it->value == it->next->value)
            list_erase(l, it->next);
        else
            it = it->next;
    }
}

void list_reverse(List *l)
{
    Node *it = l->head;
    while (it != NULL) {
        Node *next = it->next;
        it->next = it->prev;
        it->prev = next;
        it = next;
    }
    Node *temp = l->head;
    l->head = l->tail;
    l->tail = temp;
}

void list_splice(List *l, Node *pos, List *other)
{
    while (other->head != NULL) {
        list_insert_before(l, pos, other->head->value);
        list_erase(other, other->head);
    }
}

void list_remove(List *l, int value)
{
    Node *it = l->head;
    while (it != NULL) {
        Node *next = it->next;
        if (it->value == value)
            list_erase(l, it);
        it = next;
    }
}

void list_remove_if(List *l, int (*pred)(int))
{
    Node *it = l->head;
    while (it != NULL) {
        Node *next = it->next;
        if (pred(it->value))
            list_erase(l, it);
        it = next;
    }
}

int greater_than_20(int n)
{
    return n > 20;
}

int main() {
    int init[] = {10, 20, 30, 40, 50};
    List l = list_from_array(init, 5);
    
    printf("Original: ");
    list_print(&l);
    
    Node *it = l.head;
    it = list_advance(it, 2);
    list_insert_before(&l, it, 25);
    
    printf("After insert 25 at position 2: ");
    list_print(&l);
    
    it = l.head;
    it = list_advance(it, 3);
    list_erase(&l, it);
    
    printf("After erase position 3: ");
    list_print(&l);
    
    list_push_front(&l, 5);
    list_push_back(&l, 55);
    
    printf("After push_front and push_back: ");
    list_print(&l);
    
    int init2[] = {100, 200, 300};
    List l2 = list_from_array(init2, 3);
    list_merge(&l, &l2);
    
    printf("After merge with {100,200,300}: ");
    list_print(&l);
    
    printf("l2 size after merge: %d\n", l2.size);
    
    list_sort(&l);
    printf("After sort: ");
    list_print(&l);
    
    list_unique(&l);
    printf("After unique: ");
    list_print(&l);
    
    list_reverse(&l);
    printf("After reverse: ");
    list_print(&l);
    
    int init3[] = {1, 2, 3, 4, 5};
    int init4[] = {10, 20, 30};
    List l3 = list_from_array(init3, 5);
    List l4 = list_from_array(init4, 3);
    
    Node *it2 = l3.head;
    it2 = list_advance(it2, 2);
    list_splice(&l3, it2, &l4);
    
    printf("After splice: ");
    list_print(&l3);
    
    printf("l4 size after splice: %d\n", l4.size);
    
    list_remove(&l3, 3);
    printf("After remove(3): ");
    list_print(&l3);
    
    list_remove_if(&l3, greater_than_20);
    printf("After remove_if (n > 20): ");
    list_print(&l3);
    
    list_clear(&l);
    list_clear(&l3);
    return 0;
}
