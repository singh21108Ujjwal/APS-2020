#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
int main()
{
    int i,t,n,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("? %d %d %d %d %d",n-4,n-3,n-2,n-1,n);
        fflush(stdout);
        scanf("%d%d",&i,&j);
        printf("! %d\n",n);
        fflush(stdout);
    }
return 0;
}
