#include<stdio.h>
#include<stdlib.h>
int main()
{
int T,A,B,i,r;
scanf("%d",&T);
for(i=0;i<T;i++)
{
    int c=A*B;
    while(r)
    {scanf("%d%d",&A,&B);
        r=A%B;
        if(r==0)
            break;
        B=A;
        A=r;

    }
    printf("%d",A);
}}
