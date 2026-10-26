#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int head;
    int size;
    int capacity;
} Queue;

void queue_push(Queue *q, int value)
{
    if (q->head + q->size == q->capacity) {
        q->capacity = q->capacity == 0 ? 1 : q->capacity * 2;
        q->data = realloc(q->data, q->capacity * sizeof(int));
    }
    q->data[q->head + q->size++] = value;
}

void queue_pop(Queue *q)
{
    q->head++;
    q->size--;
}

int queue_front(const Queue *q)
{
    return q->data[q->head];
}

int queue_back(const Queue *q)
{
    return q->data[q->head + q->size - 1];
}

int queue_empty(const Queue *q)
{
    return q->size == 0;
}

int main() {
    Queue q = {NULL, 0, 0, 0};
    
    queue_push(&q, 10);
    queue_push(&q, 20);
    queue_push(&q, 30);
    
    printf("Front: %d\n", queue_front(&q));
    printf("Back: %d\n", queue_back(&q));
    printf("Size: %d\n", q.size);
    
    queue_pop(&q);
    printf("After pop, front: %d\n", queue_front(&q));
    
    queue_push(&q, 40);
    printf("After push 40, back: %d\n", queue_back(&q));
    
    printf("%d\n", queue_empty(&q));
    
    free(q.data);
    return 0;
}
