#ifdef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

/*
A queue is similar to stack, except that items are added at one end but removed from the other in a FIFO(first-in, first-out) fashion. Operations on a queue might include :

Inserting an item at the end of the queue
Removing an item from the beginning of the queue
Returning the first item in the queue(without changing the queue)
Returning the last item in the queue(without changing the queue)
Testing whether the queue is empty

Write an interface for a queue module in the form of a header file named queue.h
*/

typedef int item;
typedef struct queue_t *queue;

void insert(queue, item i);
void remove(queue);
int return_first(queue);
int return_last(queue);
bool is_empty(queue);
