#include "stack.h"

Stack *initialiseStack(void) {
    return initialiseLinkedList();
}

void *popStack(Stack *stack) {
    void *data;

    if (!stack->tail)
        return NULL;
    data = stack->tail->data;
    removeListTail(stack);

    return data;
}

void pushStack(Stack *stack, void *data, size_t size) {
    appendLinkedList(stack, NULL);
    if (!(stack->tail->data = malloc(size)))
        exit(EXIT_FAILURE);
    memcpy(stack->tail->data, data, size);
}

void *peekStack(Stack *stack) {
    if (!stack->tail)
        return NULL;

    return stack->tail->data;
}

void printStack(Stack *stack, void (*print_func)(void *)) {
    printLinkedList(stack, print_func);
}

void freeStack(Stack *stack) {
    void *data;

    while ((data = popStack(stack)))
        free(data);
    freeLinkedList(stack);
}