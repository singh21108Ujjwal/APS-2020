#include<stdio.h>
#define size 10
void read(int a[size],int n);
void display(int a[size],int n);
void compare(int a[size],int b[size],int n);
int main()
{
    int i,n,a[size],b[size];
    printf("enter the size of matrix\n");
    scanf("%d",&n);
    if(n>0 && n<11)
    {
        printf("\n");
        read(a,n);
        display(a,n);
        printf("\n");
        read(b,n);
        display(b,n);
        printf("\n");
        compare(a,b,n);

    }
    else
        {
        printf("invald input\n");
        }
    return 0;
}
void read(int a[size],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[size],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void compare(int a[size],int b[size],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            printf("%d element is not equal\n",i+1);
        }
        else
            printf("%d element is same\n",i+1);
    }
}
