# StackAndQueuesInC

|          Content          |
|---------------------------|
|[Description](#description)|
|[How To Use](#how-to-use)  |
|[Stack](#stack)            |
|[Queue](#queue)            |

## Description

This is a library written in C to implement a stack and queue data structure. This will be useful in other program and uses my implmentations of linked lists to create the stacks and queues, this can be found at https://github.com/captianplasam/LinkedListLibraryC.

## How to use

Run the provided make file with the command 
    
    make all
This is make all the required .o files for use in other programs.  


# Stack

|        Stack content        |
|-----------------------------|
|[Description](#description-1)|
|[Functions](#functions)      |

## Description

A stack is a LIFO structure meaning the last item in will be the first item out. It will stroe the items in reverse of order of putting them in. This will be useful for other projects and will be a detailed implementation.

## Functions

- **initialiseStack** - This will assign memory to the stack and will return it to the user. This takes in no arguments and returns a Stack.
- **popStack** - This will get the top item from the stack and remove it from the stack. This will take in the stack to remove the item and return the data that is being removed from the stack.
- **pushStack** - This will put an item onto the top of the stack. This takes in three arguments of the stack to add an item to, the item wanting to be added to the stack and the size of the item. It returns nothing.
- **peekStack** - This will give the user the top item of the stack without removing it. This will return the data on top of the stack and takes in the stack to get the data from.
- **freeStack** this will empty the stack if not empty and free and memory assigned to it. This should be done once the stack is done with.


# Queue

|        Queue content        |
|-----------------------------|
|[Description](#description-2)|
|[Functions](#functions-1)    |

## Description

A queue is a FIFO structure meaning the first item in will be the first item out. It will store the items in the order of putting them in. This will be useful for other projects and will be a detailed implementation.

## Functions

- **initialiseQueue** - This will assign memory to the queue and will return it to the user. This takes in no arguments and returns a queue.
- **popQueue** - This will get the first item ing the queue and remove it from the queue. This will take in the queue to remove the item and return the data that is being removed from the queue.
- **pushQueue** - This will put an item on the back of the queue. This takes in three arguments of the queue to add an item to, the item wanting to be added to the queue and the size of the item. It returns nothing.
- **peekQueue** - This will give the user the first item in the queue without removing it. This will return the data in the queu and takes in the queue to get the data from.
- **freeQueue** this will empty the queue if not empty and free and memory assigned to it. This should be done once the queue is done with.