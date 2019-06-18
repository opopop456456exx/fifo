#include<stdlib.h>
#include"stdio.h"
#include "fifo.h"


/** Initialize your data structure here. Set the size of the queue to be k. */

MyCircularQueue* myCircularQueueCreate(int k) {
 
MyCircularQueue* MyQ;
if(k<0)
{
	return NULL; 
}
MyQ=(MyCircularQueue*)malloc(sizeof(MyCircularQueue));

MyQ->size = k;
MyQ->Q=(int *)malloc(sizeof(int)*k);
MyQ->r=0;
MyQ->w=0;
MyQ->used=0;

return MyQ;
}

/** Insert an element into the circular queue. Return true if the operation is successful. */
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
 
	//MyCircularQueue* MyQ;
	if(obj == NULL)
	{
		return false;
	}
	if(obj->used == obj->size)
	{
		printf("\nFifo full!\n");
		return false;
	}

	obj->Q[obj->w]=value;
	obj->w++;
	if(obj->w == obj->size)
	{
		obj->w = 0;
	}
	obj->used++;
	return true;
}

/** Delete an element from the circular queue. Return true if the operation is successful. */
bool myCircularQueueDeQueue(MyCircularQueue* obj) {
  	return true;
}

/** Get the front item from the queue. */
int myCircularQueueFront(MyCircularQueue* obj) {
  	return true;
}

/** Get the last item from the queue. */
int myCircularQueueRear(MyCircularQueue* obj) {
  	return true;
}

/** Checks whether the circular queue is empty or not. */
bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
  	return true;
}

/** Checks whether the circular queue is full or not. */
bool myCircularQueueIsFull(MyCircularQueue* obj) {
  	return true;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    	return;
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/
