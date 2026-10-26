#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} Stack;

void stack_push(Stack *s, int value)
{
    if (s->size == s->capacity) {
        s->capacity = s->capacity == 0 ? 1 : s->capacity * 2;
        s->data = realloc(s->data, s->capacity * sizeof(int));
    }
    s->data[s->size++] = value;
}

void stack_pop(Stack *s)
{
    s->size--;
}

int stack_top(const Stack *s)
{
    return s->data[s->size - 1];
}

int stack_empty(const Stack *s)
{
    return s->size == 0;
}

int main() {
    Stack s = {NULL, 0, 0};
    
    stack_push(&s, 10);
    stack_push(&s, 20);
    stack_push(&s, 30);
    
    printf("%d\n", stack_top(&s));
    stack_pop(&s);
    printf("%d\n", stack_top(&s));
    printf("%d\n", s.size);
    printf("%d\n", stack_empty(&s));
    
    free(s.data);
    return 0;
}
