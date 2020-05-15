#include <stdio.h>

void read(int m[30],int n);
void display(int m[30],int n);
void sum(int m[30],int n);
main()
{
int n,size,m[30];
printf("enter value of no. of elements\n");
scanf("%d",&n);
if(n>0 && n<30)
{
    read(m,n);
    display(m,n);
    sum(m,n);
}
else
    printf("invalid input\n");
}
void read(int m[30],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
}
void display(int m[30],int n)
{
int i;
for(i=0;i<n;i++)
{
    printf("%d\t",m[i]);
}
}
void sum(int m[30],int n)
{
int i,j,sum=0;
for(i=0;i<n;i++)


{

   sum=sum+m[i];
}

if(sum==0)
    printf("array sum=0\n");
else
    printf("array sum is not 0\n");
}
