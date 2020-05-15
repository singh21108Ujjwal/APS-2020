#include<stdio.h>
main()
{
    int i=1, a=4, b ,sum=0;
    printf("enter the value of b\n");
    scanf("%d",&b);
    while(i<b)
    {
        sum=sum+(a/i);
        i=i+2;
        (a/i)== -(a/i);
    }
    printf("sum is %d",sum);
}
