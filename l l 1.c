#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 5
#define TRUE
#define false
struct stack
{
    int top;
    int item[STACKSIZE];
}typedef  struct stack STACK;
int empty(STACK *s)
{
    if(s->top==-1)
    {
        return TRUE;
    }
    else
        return  false;

}
int full(STACK *s)
{
    if(s->top==STACKSIZE-1)
        return TRUE;
    else
        return FALE;
}
void push (STACK *s)
{
    if(full(s))
        printf("stack full\n");
    else
        {
        int a;
    scanf("%d",&a);
    s->top++;
    s->item[s->top]=a;
    printf("push suscessfull\n");

        }
}
void pop(STACK *s)
{
    if(empty(s))
    {
        printf("stack empty\n");
        return;
    }
    int x;
    x=s->item[s->top];
    s->top--;
    printf("popped value is %d\n",x);
    return;
}

int main()
{
STACK s;
s.top=-1;
int choice=0;
switch(choice)
{
    printf("**MENU**\n");
    printf("1-push\n2-pop\n3-peek\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:push(&s);
        break;
        case 2:pop(&s);
        break;
        case 3:peek(s);
        break;
        case 4:print(s);
        break;
        case 5:printf("termaniting\n");
        exit (0);
    }
}

}
