#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,e,t,f,g;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        c=a%8;
        g=a/8;
        if(c==0)
        {
            printf("%d",a-1);
            printf("SL\n");
        }
        else if(c==7)
        {
            printf("%d",a+1);
            printf("SU\n");
        }
        else
        {
            e=c%3;
            b=(c-1)/3;
            if(b==0)
            {


            if(e==1)
            {
                printf("%d",(8*g)+3);
                printf("LB\n");
            }
            else if(e==2)
            {
                printf("%d",(8*g)+3);
                printf("MB\n");
            }
            else if(e==0)
            {
                printf("%d",(8*g)+6);
                printf("UB\n");
            }}
            else
            {f=e%3;
            if(f==1)
            {
                printf("%d",(8*g)+f);
                printf("LB\n");
            }
            else if(f==2)
            {
                printf("%d",(8*g)+f);
                printf("MB\n");
            }
            else
            {
                printf("%d",(8*g)+f+3);
                printf("UB\n");



            }
        }
    }

}
 return 0;
}
