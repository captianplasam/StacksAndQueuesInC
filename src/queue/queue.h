#ifndef _QUEUE_H
#define _QUEUE_H

#include "../LinkedListLibrary/linkedList.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef LinkedList Queue;

Queue *initialiseQueue(void);
void *popQueue(Queue *queue);
void pushQueue(Queue *queue, void *data, size_t size);
void *peekQueue(Queue *queue);
void printQueue(Queue *queue, void (*print_func)(void *));
void freeQueue(Queue *queue);

#endif