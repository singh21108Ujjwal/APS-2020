#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
#define TRUE 1
#define FALSE 0

struct queue
{
    int items[SIZE];
    int front;
    int rear;
};
typedef struct queue QUEUE;

int full (QUEUE *q)
{
    if(q->rear==SIZE-1)
        return TRUE;
    else
        return FALSE;
}
int empty(QUEUE *q)
{
    if(q->front>q->rear)
        return TRUE;
    else
        return FALSE;
}
void enque(QUEUE *q)
{
    if(full(q))
        printf("QUeuefull\n");
    else
    {
        int y;
        printf("Enter item to be enqued\n");
        scanf("%d",&y);
        q->rear++;
        q->items[q->rear]=y;
        printf("data successfully added\n");


    }
}

void deque(QUEUE *q)
{
    if(empty(q))
        printf("queue empty\n");
    else
    {
        int z;
        z=q->items[q->front];
        q->front++;
        printf("dequed item is %d",z);
    }
}

int main()
{
    QUEUE q;
    int x;
    q.rear=-1;
    q.front=0;
    while(1)
    {
    printf("1-enque\n2-deque\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:enque(&q);
        break;
        case 2:deque(&q);
        break;
        default:printf("TERMINATING\n");
        exit(0);
    }

    }


}
