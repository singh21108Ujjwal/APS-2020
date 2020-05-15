#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 5
#define TRUE 1
#define FALSE 0
struct queue
{
    int front;
    int rear;
    int item[MAXQUEUE];
};
typedef struct queue QUEUE;
int empty(QUEUE *q)
{
    if(q->front > q->rear)
        return TRUE;
    else
        return FALSE;
}
int full(QUEUE *q)
{
    if(q->rear == MAXQUEUE-1)
        return TRUE;
    else
        return FALSE;
}
void dequeue(QUEUE *q)
{
    if(empty(q))
    {
        printf("queue empty\n");
        return;
    }
    int x;
    x=q->item[q->front];
    q->front++;
    printf("dequed item is %d\n",&x);
    return;
}
void enqueue(QUEUE *q)
{
    if(full(q))
    {
        printf("queue full\n");
        return;
    }
    int x;
    printf("enter enqued item\n");
    scanf("%d",&x);
    q->rear++;
    q->item[q->rear]=x;
    printf("insertion suscessfull\n");
    return 0;
}
void print(QUEUE q)
{
int i;     //wrong function
q.rear=1;
for(i=q.rear;i<q.front;i++)
{
    printf("%d",q.item[i]);
}
}
int main()
{
    QUEUE q;
    q.front=0;
    q.rear=-1;
    int choice=0;
    while (1)
    {
        printf("MENU\n");
        printf("1-enqueue\n2-dequeue\n3-display\n");
        printf("***\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue(&q);
                   break;

            case 2: dequeue(&q);
            break;
            case 3: print(q);
            break;
            case 4: printf("termiating\n");
            exit (0);
        }
    }
}
