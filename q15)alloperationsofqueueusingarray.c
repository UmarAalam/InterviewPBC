//  Created by mr_easy on 27/12/18.
//  q15)implement all operations of queue ds using array,LL
//1)enqueue,dequeue
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct queue{
        int front,rear, size,capacity;
    int *arr;
};

struct queue q;

//initialization of structure variable
//using create function of structure

struct queue *createq(int capacity)
{
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->capacity=capacity;
    q->front=0;
    q->rear=capacity-1;
    q->size=0;
    q->arr=(int *)malloc((q->capacity)*(sizeof(int)));
    return q;
}

//to check whether queue is full or not
int isfull(struct queue *q)
{
    return (q->size==q->capacity);
}

//to check whether queue is empty or not
int isempty(struct queue *q)
{
    return(q->size==0);
}
//enqueue operations
void enqueue(struct queue *q,int item)
{
 if(isfull(q))
    return;
    q->rear=(q->rear+1)%(q->capacity); //to make the circular array
    
    q->arr[q->rear]=item;
    
    q->size=q->size+1;
    printf("%d\t",item);
    
}
//to get front of the element

int front(struct queue *q)
{
    //check whether it is empty or not
if(isempty(q))
    return INT_MIN;
    return q->arr[q->front];
}


//to get the rear of the element
int rear(struct queue *q)
{
if(isempty(q))
    return INT_MIN;
    return q->arr[q->rear];
}

//to implement the dequeue operations
int dequeue(struct queue *q)
{
    int i=q->arr[q->front];
    q->front=(q->front+1)%(q->capacity);
    q->size=q->size-1;
    return i;
    
}
int main()
{
    struct queue *q=createq(1000);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,5);
    enqueue(q,1);
    enqueue(q,7);
   printf("d=%d\n",dequeue(q));
    
    
    //to print the content of the queue
    for(int i=q->front;i<=q->size;i++)
    {
        printf("%d\t",q->arr[i]);
    }
    printf("front element is:%d",q->arr[q->front]);
    printf("rear element is:%d",q->arr[q->rear]);
    return 0;
    
}


















