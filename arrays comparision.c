#include<stdio.h>
#define s 10
void read(int a[s],int n);
void display(int a[s],int n);
void sum(int a[s],int b[s],int n);
int main()
{
    int i,c[i],a[s],b[s],n;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    if(n>0 && n<=10)
    {
        read(a,n);
        read(b,n);
        display(a,n);
        display(b,n);
        sum(a,b,n);
    }
    else
        {
         printf("invalid input\n");
        }

        return 0;
}
void read(int a[s],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[s],int n)
{
    int i;
       for(i=0;i<n;i++)
    {

        printf("%d\t",a[i]);
    }
}
void sum(int a[s],int b[s],int n)
{
    int i,c[i];
    for(i=0;i<n;i++)
    {
      c[i]=a[i]+b[i]/2;
    }
    printf("%d is sum\n",c[i]);
}
