#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    void *data;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct LinkedList {
    Node *head;
    Node *tail;
} LinkedList;

Node *initialiseNode(void);
void freeNode(Node *currentNode);
LinkedList *initialiseLinkedList(void);
void freeLinkedList(LinkedList *list);
void appendLinkedList(LinkedList *list, void *data);
void prependLinkedList(LinkedList *list, void *data);
void removeListHead(LinkedList *list);
void removeListTail(LinkedList *list);
void printLinkedList(LinkedList *list, void (*printFunc)(void *));
void printChar(void *data);
void printInt(void *data);
void printDouble(void *data);
void printString(void *data);

#endif