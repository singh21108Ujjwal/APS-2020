#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned long int t,n,a,z,b,k,m,A,B,r;
    scanf("%lu",&t);
    while(t--)
    {
        scanf("%lu%lu%lu%lu",&n,&a,&b,&k);
        A=a;
        B=b;
        m=1;
        if(a>b)
        {
           while(m!=0)
           {
           m=a%b;
           if(m==0)
            break;
           b=m;
           a=b;
           }
           a=(A*B)/b;
        }
        if(b>a)
        {
           while(m!=0)
           {
           m=b%a;
           if(m==0)
            break;
           a=m;
           b=a;
           }
           a=(A*B)/a;
        }
       //printf("%u\t",a);//
       r=(2*(n/a));
        z=(n/A)+(n/B)-r;
       // printf("%d\n",z);//


        if(z<k)
          printf("Lose\n");
        else
           printf("Win\n");
    }
}
