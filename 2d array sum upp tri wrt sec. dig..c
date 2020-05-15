#include<stdio.h>
#define si 10
void display(int a[si][si],int r,int c);
void read(int a[si][si], int r,int c);
void dig(int a[si][si],int r, int c);
main()
{
    int a[si][si],r,c,m;
    printf("enter the no of rows & column\n");
    scanf("%d%d",&r,&c);

    if(r==c)
    {
        printf("it is a square matrix\n");
        read(a,r,c);
        display(a,r,c);
        dig(a,r,c);
    }
    else
        printf("enter a valid input\n");
}
void display(int a[si][si],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void read (int a[si][si],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void dig(int a[si][si],int r,int c)
{
    int i,j,sum=0,b,m;
     b=r;



    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

         m=i+j;
         if (m<b-1)
         {


          printf("%d\t",a[j][i]);
          sum=sum+a[i][j];
         }
        }



} printf("sum is %d",sum);
   }


