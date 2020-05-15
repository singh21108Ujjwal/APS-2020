#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
#define true 1
#define false 0

struct stack
{
    int top;
    int item[maxsize];
}s1,s2;
void insert(struct stack *s1);
void pop(struct stack  *s1,struct stack *s2);
int main()
{
    int choice;
    s1.top=s2.top=-1;
     while(1)
     {



    printf("1-pop from s1 to s2\n2-insert items\n3-print s2\n ");
    scanf("%d",&choice);
    switch(choice)
    {

        {

        case 1:pop(&s1,&s2);
            break;
        case 2:insert(&s1);
            break;
        case 3:print(&s2);
            break;
        case 4: printf("terminating\n");
            exit (0);
        }

    }}
}
void insert(struct stack *s1)

{
    int x;
    printf("enter item\n");
    scanf("%d",&x);
    s1->top++;
    s1->item[s1->top]=x;
    printf("push sucessfull\n");
}
void pop(struct stack *s1,struct stack *s2)
{
    s2->top++;
    s2->item[s2->top]=s1->item[s1->top];
    s1->top--;
    printf("%d is popped value\n",s2->item[s2->top]);
}
void print(struct stack *s2)
{
    int i;
    for(i=s2->top;i>=0;i--)
    {
        printf("%d\t",s2->item[i]);
    }
printf("\n****************\n");

}

