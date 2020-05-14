#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
	
}
typedef struct node NODE;

NODE* insert_at_begin(NODE* start)
{
		NODE *newnode;
		newnode=(NODE*)malloc(sizeof(NODE));
		printf("\nEnter node data :- ");
		scanf("%d",newnode->data);
		if(newnode==NULL)
		{
			printf("Memory allocation failed\n");
		}
		else
		{
			if(start==NULL)
			{
				start=newnode;
			}
			else
			{
				newnode->next=start;
				start=newnode;
			}
		}
		return start;
}

int main()
{
	int n;
	NODE *start;
	start=NULL;
	while(1)
	{	
		printf("1-Insert element at start\n");
		scanf("%d",&n);
		switch(n)
		{
			case 0:start=insert_at_begin(start);
					break;
		}
	}
}