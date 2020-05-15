#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 5
#define TRUE 1
#define FALSE 0
struct stack
{
    int top;
    int item[STACKSIZE];
};
typedef  struct stack STACK;
int empty(STACK *s)
{
    if(s->top == -1)
    {
        return TRUE;
    }
    else
        return  FALSE;

}
int full(STACK *s)
{
    if(s->top == (STACKSIZE-1))
        return TRUE;
    else
        return FALSE;
}
void push (STACK *s)
{
    if(full(s)){
        printf("stack full\n");
        return;}
    int x;
    printf("enter item to be pushed\n");
    scanf("%d",&x);
    s->top++;
    s->item[s->top] = x;
    printf("push sucessful\n");


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
void peek(STACK *s)
{
    if(empty(s))
    {
        printf("stack empty\n");
        return;
    }
    int x;
    x=s->item[s->top];

    printf("popped value is %d\n",x);
    return;
}
void print (STACK *s)
{
    int i;
    for(i=s->top;i>=0;i--)
    {
        printf("%d\n",s->item[i]);
    }
}

int main()
{
STACK s;
s.top=-1;
int choice=0;
while(1)
{
    printf("**MENU**\n");
    printf("1-push\n2-pop\n3-peek\n4-print\n");
    printf("enter your choice\n");
    printf("****\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:push(&s);
        break;
        case 2:pop(&s);
        break;
        case 3:peek(&s);
        break;
        case 4:print(&s);
        break;
        case 5:printf("termaniting\n");
                exit (0);

    }
}

}
