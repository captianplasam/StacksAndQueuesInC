#ifndef _STACK_H
#define _STACK_H

#include "../LinkedListLibrary/linkedList.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef LinkedList Stack;

Stack *initialiseStack(void);
void *popStack(Stack *stack);
void pushStack(Stack *stack, void *data, size_t size);
void *peekStack(Stack *stack);
void printStack(Stack *stack, void (*print_func)(void *));
void freeStack(Stack *stack);

#endif