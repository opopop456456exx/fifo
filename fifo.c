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
    printf("\r\n%d %d",obj->w,obj->Q[obj->w]);
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
	//int res;
	if (obj == NULL)
	{
		return false;
	}

	if (obj->used == 0)
	{
		printf("\r\nQueue is empty!");
		return false;
	}
	//res = obj->Q[obj->r];
	obj->r++;
	obj->used--;

  	return true;
}

/** Get the front item from the queue. */
int myCircularQueueFront(MyCircularQueue* obj) {
	int res;
	if (obj == NULL)
	{
		return false;
	}

	if (obj->used == 0)
	{
		printf("\r\nFQueue is empty!");
		return -1;
	}
	res = obj->Q[obj->r];
	//obj->r++;
	//obj->used--;

  	return res;
}

/** Get the last item from the queue. */
int myCircularQueueRear(MyCircularQueue* obj) {
  	int res;
    int wtmp;
	if (obj == NULL)
	{
		return false;
	}

	if (obj->used == 0)
	{
		printf("\r\nQueue is empty!");
		return -1;
	}
    if(obj->w -1 >= 0)
    {
        wtmp = obj->w - 1;
    }
    else
    {
        wtmp = obj->size - 1;
    }
	res = obj->Q[wtmp];
	return res;
}

/** Checks whether the circular queue is empty or not. */
bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
  	if(obj->used > 0)
	{
	  return false;
	}
	return true;
}

/** Checks whether the circular queue is full or not. */
bool myCircularQueueIsFull(MyCircularQueue* obj) {
 if(obj->used  == obj->size)
 {
	 return true;
 }
	return false;
}

void myCircularQueueFree(MyCircularQueue* obj) {

	obj->r=0;
	obj->w=0;
	obj->used=0;
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
