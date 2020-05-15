#include<stdio.h>
main()
{
    int i,sum=0,n1,n2,j;
    printf("enter the range in increasing order\n");
    scanf("%d%d",&n1,&n2);
    for(j=n1;j<=n2;j++)

    {
        sum=0;
        for(i=1;i<j;i++)
        {


        if(j%i==0)
        {
            sum=sum+i;
        }
        }

    if(sum==j)
        printf("%d \n",j);

}}
