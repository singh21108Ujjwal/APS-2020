#include<stdio.h>
main()
{
    int i,flag=1,n;
    printf("enter no \n");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
       if(n%i==0)
       {
           flag=1;
           break;

       }
    }
if(flag==1)
{
    printf("prime no\n");
}
else
    printf("not prime no.\n");
}
