//NAME:-Ujjwal kumar
//usn:-01FE17BCS234
//R.No:-260



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char name[30];
    int quantity;
    struct node *next;
}*head,*prev;

int num;

struct node* getnode()
{
 struct node *p;
 p=malloc(sizeof(struct node));
 printf("Enter the name of ingredient\n");
 scanf("%s",p->name);
 p->quantity=num;
 p->next=NULL;
 return p;
}

void insertend()
{
    struct node *p=getnode();
    if (head==NULL)
    {
        head=p;
        prev=p;
    }
    else
    {
        prev->next=p;
        prev=p;
    }
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("Ingredient name=%s\tQuantity=%d\n",temp->name,temp->quantity);
        temp=temp->next;
    }
}

int main()
{
  int ch,count1=0,count2=0,count3=0,count4=0,count5=0;
  for(;;)
  {
    printf("\nHello Shopkeeper!\t");
    printf("Which of the following items do you have?\n");
    printf("1.Fluxweed\n2.Knotgrass\n3.Leeches\n4.Lacewing Flies\n5.Bicorn Horn\n6.Display\n7.Exit\n");
    scanf("%d",&ch);

    if(ch==6)
      display();

    if(ch==7 || (count1==30 && count2==20 && count3==30 && count4==50 && count5==9))
      break;

    printf("How much quantity do you have?\n");
    scanf("%d",&num);

    if(ch == 1 && count1<=30)
      count1=count1+num;
    if(ch == 2)
      count2=count2+num;
    if(ch == 3)
      count3=count3+num;
    if(ch == 4)
      count4=count4+num;
    if(ch == 5)
      count5=count5+num;

    if(ch ==1 && count1<=30)
      insertend();

    if(ch ==2 && count2<=20)
      insertend();

    if(ch ==3 && count3<=42)
      insertend();

    if(ch ==4 && count4<=50)
      insertend();

    if(ch ==5 && count5<=9)
      insertend();

  }


}
