#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int diff;
    diff=n1-n2;
    if(diff>0)
        printf("%d\n",diff);
    else
        printf("%d",n1+n2);
    return 0;
}
