#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,r,R;
    scanf("%d%d",&n,&r);
    while(n--)
    {
        scanf("%d",&R);
        if(R>=r)
            printf("Good boi\n");
        else
            printf("Bad boi\n");
    }
    return 0;
}
