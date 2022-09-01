#include "linkedList.h"

Node *initialiseNode(void) {
    Node *currentNode;

    if (!(currentNode = (Node *) malloc(sizeof(Node)))) {
        printf("Error assigning memory");
        exit(EXIT_FAILURE);
    }
    currentNode->data = currentNode->prev = currentNode->next = NULL;

    return currentNode;
}

void freeNode(Node *currentNode) {
    if (!(currentNode))
        return;
    free(currentNode);
}

LinkedList *initialiseLinkedList(void) {
    LinkedList *list;

    if (!(list = (LinkedList *) malloc(sizeof(LinkedList)))) {
        printf("Error assigning memory");
        exit(EXIT_FAILURE);
    }
    list->head = list->tail = NULL;

    return list;
}

void freeLinkedList(LinkedList *list) {
    Node *nextNode;
    
    while (list->head) {
        nextNode = list->head->next;
        freeNode(list->head);
        list->head = nextNode;
    }
    free(list);
}

void appendLinkedList(LinkedList *list, void *data) {
    Node *node;

    node = initialiseNode();
    node->data = data;
    node->prev = list->tail;
    if (list->tail)
        list->tail->next = node;
    list->tail = node;
    if (!list->head)
        list->head = node;
}

void prependLinkedList(LinkedList *list, void *data) {
    Node *node;

    node = initialiseNode();
    node->data = data;
    node->next = list->head;
    if (list->head)
        list->head->prev = node;
    list->head = node;
    if (!list->tail)
        list->tail = node;
}

void removeListHead(LinkedList *list) {
    Node *node;

    if (!list->head)
        return;
    node = list->head->next;
    freeNode(list->head);
    list->head = node;
    if (list->head)
        list->head->prev = NULL;
    else
        list->tail = NULL;
}

void removeListTail(LinkedList *list) {
    Node *node;

    if (!list->tail)
        return;
    node = list->tail->prev;
    freeNode(list->tail);
    list->tail = node;
    if (list->tail)
        list->tail->next = NULL;
    else
        list->head = NULL;
}

void printLinkedList(LinkedList *list, void (*printFunc)(void *)) {
    Node *currentNode;

    currentNode = list->head;
    while (currentNode) {
        (*printFunc)(currentNode->data);
        currentNode = currentNode->next;
    }
}

void printChar(void *data) {
    printf("%c\n", *((char *) data));
}

void printInt(void *data) {
    printf("%d\n", *((int *) data));
}

void printDouble(void *data) {
    printf("%f\n", *((double *) data));
}

void printString(void *data) {
    printf("%s\n", (char *) data);
}