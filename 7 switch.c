#include<stdio.h>
int main()
{
    int n,rev=1;
    printf("enter n\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rev=rev*10;
        rev=rev+(rev%10);
         n/10;
    }
    printf("reverse no is %d",rev);
    return(0);
}
