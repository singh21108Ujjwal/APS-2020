#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE* insert_start(NODE *start)
{
    NODE* newnode;
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->next=NULL;
    if(newnode==NULL)
    {
        printf("memory allocation failed");
        return start;
    }
    else
    {
        printf("Enter the node data\n");
        scanf("%d",&newnode->data);
        if(start==NULL)
        {
            start=newnode;
            printf("Data inserted\n");
            return start;
        }
        else
        {
            newnode->next=start;
            start=newnode;
            printf("Data inserted\n");
            return start;
        }

    }
}

NODE* insert_end(NODE *start)
{
    NODE* newnode;
    NODE *temp;
    temp=start;
    newnode=(NODE*)malloc(sizeof(NODE));
    newnode->next=NULL;
    if(newnode==NULL)
    {
        printf("memory allocation failed");
        return start;
    }
    else
    {
        printf("Enter the node data\n");
        scanf("%d",&newnode->data);


        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            return start;
        }

    }
}

NODE* delete_start(NODE *start)
{
    NODE *temp;
    temp=start;
    if(start==NULL)
    {
        printf("Empty list\n");
        return start;
    }
    else
    {
     start=temp->next;
     free(temp);
     return start;

    }
}

NODE* delete_end(NODE *start)
{
    NODE *temp1;
    NODE *temp2;
    temp1=start;
    temp2=NULL;
    if(start==NULL)
    {
        printf("Empty list\n");
        return start;
    }
    else
    {
     while(temp1->next!=NULL)
     {
         temp2=temp1;
         temp1=temp1->next;
     }
     free(temp1);
     temp2->next=NULL;
     return start;


    }
}

void view(NODE *start)
{
    NODE *temp;
    temp=start;
    while(temp->next!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("%d\t",temp->data);
}
int main()
{
   NODE *start;
   start=NULL;
   while(1)
   {
       printf("1-insert at start\n2-insert at last\n3-delete from start\n4-delete from end\n5-view\n");
       int choice;
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:start=insert_start(start);
           break;
            case 2:start=insert_end(start);
           break;
            case 3:start=delete_start(start);
           break;
            case 4:start=delete_end(start);
           break;

           case 5:view(start);
           break;
            default:printf("Terminating\n");
           exit(0);
       }
   }
}
