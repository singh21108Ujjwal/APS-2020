#include<stdio.h>
main()
{
    int i,sum=0,n;
    printf("enter the no.\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
        printf("%d is perfect no.\n",n);
    else
        printf("not a perfect no.");
}
