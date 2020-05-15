#include<stdio.h>
#define size 10
void read(int a[size][size],int m,int n);
void display(int a[size][size],int m,int n);
void max(int a[size][size],int m,int n);
int main()
{
    int a[size][size],m,n;
    printf("enter the no. of row & column\n");
    scanf("%d%d",&m,&n);
    if(m>0 && m<10 && n>0 && n<10)
    {

        read(a,m,n);
        display(a,m,n);
        max(a,m,n);
    }
    else
        printf("invalid input\n");
    return 0;
}
void read(int a[size][size],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void display(int a[size][size],int m,int n)
{
   int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void max(int a[size][size],int m,int n)
{
    int i,j,max;
    for(i=0;i<m;i++)
    {


        max=a[i][0];
    for(j=0;j<n;j++)
    {
        if(a[i][j]>max)
        {
            max=a[i][j];

        }
    }
    printf("max in column %d is %d\n",i+1,max);
}
}
