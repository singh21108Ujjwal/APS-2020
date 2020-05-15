#include<stdio.h>
int main()
{
    int a[2],sum=0,i;
    printf("enter 2 no.s for add\n ");
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<2;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d",sum);
    return 0;
}
