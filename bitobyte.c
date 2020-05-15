#include<stdio.h>
#include<math.h>
int main()
{
      long int t,n,x,y,z;
    scanf("%ld",&n);
    while(n--)
    {
        scanf("%ld",&t);
        y=t/26;
        x=t%26;
        z=pow(2,y);
        if(x==0)
        {
           printf("%ld %ld %ld\n",0,0,(z/2));

        }
        else if (x<=2)
        printf("%ld 0 0\n",z);

        else if (x<=10)
        printf("0 %ld 0\n",z);

        else
        printf("0 0 %ld\n",z);



}
    }
