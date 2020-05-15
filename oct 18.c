#include<stdio.h>
#include<stdlib.h>
int main()
{int a,b, c,i,j,t,p1,p2,k;
   scanf("%d",&t);
   for(i=0;i<t;i++)
   { a=0,b=1;
       scanf("%d%d%d",&p1,&p2,&k);
        c=(p1+p2)/k;
        for(j=0;j<c;j++)
       {
          a=a+b;
          b=a-b;
          a=a-b;
       }
       if(a==0)
         printf("CHEF\n");

       if(a==1)
         printf("COOK\n");
    }
return 0;
}
