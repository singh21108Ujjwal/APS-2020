#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=1,rem=0,m,c;
    scanf("%d%d",&m,&c);
    m=m/2;

    rem=1000-1;
    if(0<rem<=999)
    while(i!=0)
    {   if(0<rem<=999)
        {
        printf("1 %d\n",m);
        scanf("%d",&i);



        if(i==1)
        {
        printf("2\n");
        rem=rem-c;
        m=m/2;

        rem=rem-1;

        }
        if(i==0)
        {
        break;

        }
        }

    }
    if(i==0)
    {
        printf("3 %d\n",m);
    }

}
