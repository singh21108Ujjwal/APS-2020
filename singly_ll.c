#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
	
};
typedef struct node NODE;

NODE *insert_at_begin(NODE *start)
{
		NODE *newnode;
		newnode=(NODE*)malloc(sizeof(NODE));
		newnode->next=NULL;
		printf("Enter node data :- ");
		scanf("%d",&newnode->data);
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

NODE *insert_at_end(NODE *start)
{		
		NODE *newnode;
		NODE *temp;
		temp=start;
		newnode=(NODE*)malloc(sizeof(NODE));
		newnode->next=NULL;
		printf("Enter node data :- ");
		scanf("%d",&newnode->data);
		if(start==NULL)
		{
			start=newnode;
			return start;
		}
		else
		{
			while(start->next!=NULL)
			{
				start=start->next;
			}
			start->next=newnode;
		}
		return temp;
}

NODE *delete_from_start(NODE *start)
{
	if(start==NULL)
		printf("Empty list\n");
	else
	{	free(start);
		start=start->next;
		printf("Node deleted\n");
	}
	return start;
}

NODE *delete_from_end(NODE *start)
{
	NODE *temp1;
	NODE *temp2;
	temp1=start;
	temp2=start;
	if(start==NULL)
		printf("Empty list\n");
	else if(start->next==NULL)
	{
		free(start);
		start=NULL;
		printf("Node deleted\n");
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
		printf("Node deleted\n");
	}
	return start;
}

void data_from_last(NODE *start)
{
	int size;
	int n,m;
	size=0;
	NODE *temp1;
	temp1=start;
	while(start!=NULL)
	{
		size++;
		start=start->next;
	}
	printf("Length of list is %d\n",size);
	printf("Enter the node from end :- ");
	scanf("%d",&n);
	m=size-n;
	printf("%d\n",m);
	if(m<0)
		printf("Invalid input\n");
	else
	{
		while(m--)
		{
			temp1=temp1->next;
		}
		printf("%d\n",temp1->data);
	}

}

NODE* delete_middle_node(NODE* start)
{
	NODE *temp1;
	NODE *temp2;
	int n;
	temp1=start;
	temp2=start;
	if(start==NULL)
	{
		printf("Empty list\n");
		return NULL;
	}
	printf("Enter the node to delete :- ");
	scanf("%d",&n);
	else if(start->data==n)
	{
		printf("Node deleted\n");
		start=NULL;
	}
	else if(start->next->data==n)
	{
		printf("Node deleted\n");
		start->next=NULL;
	}
	else
	{
		while(start!=NULL)
		{
			
			if(start->data==n)
			{
				temp1=start;
				break;
			}
			start=start->next;
		}
		temp1=start->next;
	}

}

void search_element(NODE *start)
{
	int i,flag;
	flag=0;
	printf("Enter node data to search for :- ");
	scanf("%d",&i);
	while(start!=NULL)
	{
		if(start->data==i)
		{	flag=1;
			printf("Data found\n");
			break;
		}
		start=start->next;
	}
	if(flag==0)
		printf("Data not found\n");
}


void view(NODE *start)
{
	if(start==NULL)
		printf("Empty list\n");
	else
	{
		while(start!=NULL)
		{
			printf("%d\t",start->data);
			start=start->next;
		}
	}
	printf("\n");
}

int main()
{
	int n;
	NODE *start;
	start=NULL;
	while(1)
	{	
		printf("1-Insert element at start\n2-Display list\n3-Insert at end\n");
		printf("4-Delete from begin\n5-Delete from end\n6-Nth node from last\n");
		printf("7-Search for a node\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:start=insert_at_begin(start);
					break;
			case 2:view(start);
					break;
			case 3:start=insert_at_end(start);
					break;
			case 4:start=delete_from_start(start);
					break;
			case 5:start=delete_from_end(start);
					break;
			case 6:data_from_last(start);
					break;
			case 7:search_element(start);
					break;
		}
	}
}