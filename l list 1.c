#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE *delete_from_end(NODE *start)
{
    if(start==NULL)
    {
        printf("list is empty\n");
        return start;
    }
    if(start->next == NULL)
    {
        printf("%d deleted\n",start -> data);
        free(start);
        start=NULL;
        return start;
    }
    NODE *curr,*prev;
    curr=start;
    prev=NULL;
    while(curr->next !=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    printf("deleted %d",curr->next);
    free(curr);
    prev->next=NULL;
    return start;
}

NODE *delete_from_start(NODE *start)
{
if(start==NULL)
{
    printf("list empty\n");
    return start;
}
if(start->next == NULL)
{
    printf("%d deleyed\n,start->data");
    free(start);
    start=NULL;
    return start;
}
NODE * temp=start;
start= start->next;
printf("%d deleted\n",temp->data);
free(temp);
return start;

}

void display(NODE *start)
{

    if(start==NULL)
    {
        printf("empty list\n");
        return ;
    }

    NODE *temp=start;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
NODE * insert_at_start(NODE *start)
{
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    if(newnode==NULL)                     //if (start!=NULL)
                                           //newode->next=start;return newnode;
    {
        printf("memory allocation failed\n");
        return start;
    }
    printf("enter node data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(start==NULL)
    {
        return newnode;
    }
    else
    {
        newnode->next=start;
        start=newnode;
        return start;
    }
}

NODE *insert_at_end(NODE *start)
{
    NODE *newnode=(NODE*)malloc(sizeof(NODE));
    if(newnode==NULL)
    {
        printf("memory allocation failed\n");
        return newnode;
    }
    printf("enter data to be insert\n");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(start==NULL)
    {
        start=newnode;
        return start;
    }
    NODE *temp;
    temp=start;
    if(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    return start;
}

int main()
{
    NODE *start=NULL;
    int choice=0;
    while(1)
    {
        printf("**MENU\n");
        printf("1-insert at start\n 2-insert at end\n3-delete from start\n4-delete from end\n5-disply list 6-exit\n*****\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1: start = insert_at_start(start);
            break;
            case 2: start = insert_at_end(start);
            break;
            case 3:start=delete_from_start(start);
            break;
            case 4:start=delete_from_end(start);
            break;
            case 5:display(start);
            break;
            case 6:printf("terminating\n");
            exit (0);
        }

    }
}
