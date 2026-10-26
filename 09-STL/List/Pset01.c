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

int main() {
    int init[] = {1, 2, 3, 4, 5};
    List l1 = list_from_array(init, 5);
    
    printf("Original list: ");
    for (Node *it = l1.head; it != NULL; it = it->next) {
        printf("%d\t", it->value);
    }
    printf("\n");
    
    list_push_back(&l1, 6);
    list_push_front(&l1, 0);
    
    printf("After push_back and push_front: ");
    for (Node *it = l1.head; it != NULL; it = it->next) {
        printf("%d\t", it->value);
    }
    printf("\n");
    
    list_pop_back(&l1);
    list_pop_front(&l1);
    
    printf("After pop_back and pop_front: ");
    for (Node *it = l1.head; it != NULL; it = it->next) {
        printf("%d\t", it->value);
    }
    printf("\n");
    
    printf("First element: %d\n", l1.head->value);
    printf("Last element: %d\n", l1.tail->value);
    printf("Size: %d\n", l1.size);
    printf("Is empty? %s\n", (l1.size == 0 ? "Yes" : "No"));
    
    list_clear(&l1);
    printf("Size after clear: %d\n", l1.size);
    
    return 0;
}
