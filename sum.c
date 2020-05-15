#include<stdio.h>
int main()
{
    float a,b,c;
    c=1;
    int m,n,o;
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%f%f",n,a,b);
        m=a;
        printf("%d",m);
        float z[n];
        for(i=0;i<n;i++)
        {
            scanf("%f",&z[n]);
        }
        //HCF of a &b//
        if(a>b)
        {
            while(c)
            {
                c=a*b;
                a=b;
                b=c;
            }
            printf("%f",c);
        }
    }

}
