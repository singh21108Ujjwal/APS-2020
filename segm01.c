#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int t,n,a,flag=0,u,c=0,count=0;
    scanf("%ld",&t);
    while(t--)
    {flag=0;
    c=0;
    count=0;
        scanf("%ld",&n);
        u=n;
        while(n)
        {
            a=n%10;
            c++;
            if(a==0)
                count++;
            n=n/10;

        }
        if(c==count)
            flag=1;
        else if(c>count)
            n=u;
        while(n)
        {flag=0;
            a=n%10;
            if(a==1)
            {
                while(n)
                {flag=0;
                    a=n%10;
                    if(a==0)
                    {
                        while(n)
                        {flag=0;
                            a=n%10;
                            if(a==1)
                                flag++;
                            n=n/10;
                        }
                    }
                    n=n/10;
                }
            }
            n=n/10;
        }
        if(flag==1)
            printf("NO\n");
        else
            printf("YES\n");

    }
    return 0;
}
