#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n,a,b,k,i,count;
    scanf("%d",&t);
    while(t--)
    {count=0;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        for(i=1;i<=n;i++)
        {
            if((i%a)==0 && (i%b)!=0)
                count++;
            if((i%b)==0 && (i%a)!=0)
                count++;
        }
        if(count>=k)
            printf("Win\n");
        else
            printf("Lose\n");
    }
}
