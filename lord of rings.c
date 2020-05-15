#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


struct prolific_potion
{
    char ingredient[30];
    int quantity;
    struct prolific_potion * prev;
    struct prolific_potion * next;
};

typedef struct prolific_potion  PP;

PP*  gather_ingredients(PP *);
void brew(PP *);

/**
Function Name: gather_ingredients
Input Params:  The starting address of the node where collected ingredients will be added
               one by one as collected
Return Type:   Updated starting address
Description:   Collect the input one by one and add the node to the end of the list.
               You need to add a routine that will check if we have required quantity
               of desired ingredients. Till then keep collecting the input.
**/
PP* gather_ingredients(PP * process )
{int count_fluxweed=0,count_knotgrass=0,count_leeches=0,count_flies=0,count_horn=0;
PP *newnode;
PP *temp;
newnode=(PP*)malloc(sizeof(PP));
if(newnode==NULL)
{
     printf("memory allocation failed\n");
}
newnode->next=newnode->prev=NULL;
if(process==NULL)
{
process=newnode;
printf("enter ingredients name\n");
scanf("%s",process->ingredient);
fflush stdin;
printf("enter exact amount of quantity req.\n");
scanf("\n%d",&process->quantity);

}
else
{
    temp=process;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
temp->next=newnode;
newnode->prev=temp;
printf("enter ingredients name\n");
scanf("%s",newnode->ingredient);
fflush stdin;
printf("enter exact amount of quantity req.\n");
scanf("%d",&newnode->quantity);
}

return process;
}



/**
Function Name: brew
Input Params:  The starting address of the node where collected ingredients are available
Return Type:   NILL
Description:   brew the materials in order as specified:
               30 cups of fluxweed
               20 bundles of knotgrass
               42 leeches
               50 Lacewing flies
               9 Bicorn horn
               The ingredients may be available in different nodes at various positions

**/
void brew(PP * process)
{
    if(process==NULL)
        printf("empty list\n");
    if(process->next==NULL)
    {
        printf("%s is ingredient",process->ingredient);
        fflush stdin;
        printf(":-%d",process->quantity);
    }

    PP *temp;
    temp=process;
    while(temp->next!=NULL)
    {
        printf("%s",temp->ingredient);
        fflush stdin;
        printf(":-%d\n",temp->quantity);
        temp=temp->next;
    }


}


int main()
{
    PP *process = NULL;

    printf("\nThe preparation has begin at...\n");
    time_t start;
    start = time(NULL);
    printf(ctime(&start));
    printf("\n\n");
    while(1)
    {
        int ch;
        printf("enter choice....\n1-gather_ingredients\n2-brew\n3-terminating\n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1: process=gather_ingredients( process);
                  break;
            case 2:brew(process);
                 break;
            default:printf("terminating\n");
                exit (0);
        }

    }

    /// Call the functions to gather, melt and prepare///

    brew(process);

    printf("\nThe POTION is ready, The dark army can now be defeated again!\n");
    printf("\n\n");

    printf("\nThe preparation ended at...\n");
    time_t end;
    end = time(NULL);
    printf(ctime(&end));
    printf("\n\n");

    return 0;
}
