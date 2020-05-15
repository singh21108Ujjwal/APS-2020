#include<stdio.h>
int main(void)
{
    int i,j,flag,n;
    printf("enter the no.\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("not a prime no.\n");
   else
        printf("prime no\n");
        return 0;
}
