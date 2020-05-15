#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==b && c==d)
            printf("YES\n");
        else if(b==c && a==d)
            printf("YES\n");
        else if(a==c && b==d)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
