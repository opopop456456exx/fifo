#ifndef _FIFO_H_
#define _FIFO_H_

#define bool char
#define true 1
#define false 0
typedef struct
{
  int r;
  int w;
  int size;
  int used;
  int *Q;
}MyCircularQueue;

/** Initialize your data structure here. Set the size of the queue to be k. */

extern MyCircularQueue* myCircularQueueCreate(int k);

/** Insert an element into the circular queue. Return true if the operation is successful. */
extern bool myCircularQueueEnQueue(MyCircularQueue* obj, int value);

/** Delete an element from the circular queue. Return true if the operation is successful. */
extern bool myCircularQueueDeQueue(MyCircularQueue* obj);

/** Get the front item from the queue. */
extern int myCircularQueueFront(MyCircularQueue* obj);

/** Get the last item from the queue. */
extern int myCircularQueueRear(MyCircularQueue* obj);

/** Checks whether the circular queue is empty or not. */
extern bool myCircularQueueIsEmpty(MyCircularQueue* obj);
/** Checks whether the circular queue is full or not. */
extern bool myCircularQueueIsFull(MyCircularQueue* obj);
extern void myCircularQueueFree(MyCircularQueue* obj);

#endif

