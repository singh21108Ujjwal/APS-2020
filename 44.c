#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[30];
    int usn;
    int marks;
}s;
struct node
{
    struct student s;
    struct node *next;
};
struct node p;
struct node *getnode()
{

 struct node *p = (struct node*)malloc(sizeof(struct node));
    scanf("%d",&p->s.usn);
    printf("%d\n",p->s.usn);
    scanf("%s",p->s.name);
    printf("%s",p->s.name);
};
int main()
{
     getnode();
}
