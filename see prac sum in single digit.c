#include<stdio.h>
main()
{
    int n,sum=0,ld,rev=0;
    printf("enter the no.\n");
    scanf("%d",&n);
    while (n%10)
    {
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
    printf("%d\n",rev);
    while(rev%10)
    {


        if(sum+ld>=10)
        {
            break;
        }
        ld=rev%10;

        sum=sum+ld;
        rev=rev/10;
    }
    printf("%d",sum);

}
