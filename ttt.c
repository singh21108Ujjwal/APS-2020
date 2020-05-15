#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 10
#define TRUE 1
#define FALSE 0

struct stack
{
int items[STACKSIZE];
int top;
};
typedef struct stack STACK;

int empty(STACK *s)
{
    if(s->top==-1)
        return TRUE;
    else
        return FALSE;
}

int full(STACK *s)
{
    if(s->top==STACKSIZE-1)
        return TRUE;
    else
        return FALSE;
}

void push(STACK *s)
{
    int x;
    if(full(s))
        printf("stackfull\n");
    else{
        printf("Enter the data\n");
        scanf("%d",&x);
        s->top++;
        s->items[s->top]=x;
        printf("push suscessfully\n");

    }
}

void pop(STACK *s)
{
    if(empty(s))
        printf("stackfall\n");
    else
    {
        int y;
        y=s->items[s->top];
        printf("popped item is %d\n",y);
        s->top--;
        printf("%d\n",y);

    }
}

int main()
{
    STACK s;
    int j;
    s.top=-1;
    while(1)
    {
        printf("1-pop\n2-push\n");
        scanf("%d",&j);
        switch(j)
        {
            case 1:pop (&s);
            break;
            case 2:push (&s);
            break;
            default:printf("Terminating\n");
            exit(0);
        }
    }

}
