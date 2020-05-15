#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&x,&y,&z);
        if((x+z)==y)
            printf("yes\n");
         else if((y+z)==x)
            printf("yes\n");
         else if((y+x)==z)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
