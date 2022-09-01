#include "queue.h"

Queue *initialiseQueue(void) {
    return initialiseLinkedList();
}

void *popQueue(Queue *queue) {
    void *data;

    if (!queue->head)
        return NULL;
    data = queue->head->data;
    removeListHead(queue);

    return data;
}

void pushQueue(Queue *queue, void *data, size_t size) {
    appendLinkedList(queue, NULL);
    if (!(queue->tail->data = malloc(size)))
        exit(EXIT_FAILURE);
    memcpy(queue->tail->data, data, size);
}

void *peekQueue(Queue *queue) {
    if (!queue->head)
        return NULL;

    return queue->head->data;
}

void printQueue(Queue *queue, void (*print_func)(void *)) {
    printLinkedList(queue, print_func);
}

void freeQueue(Queue *queue) {
    void *data;

    while ((data = popQueue(queue)))
        free(data);
    freeLinkedList(queue);
}

