#include<stdio.h>
long int gcd(long int a, long int b);
int main()
{
    long int t,i,a,b,c,d;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
      scanf("%ld%ld",&a,&b);
      c=a*b;
      printf("%ld ",gcd(a, b));
      d=c/gcd(a, b);
      printf("%ld\n",d);
    }
}
long int gcd(long int a, long int b)
{

    if (a == 0 || b == 0)
       return 0;

    if (a == b)
        return a;


    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
