#include<stdio.h>
int main()
{
int i,n;
n=6;
int a[n];
a[0]=0;
a[1]=1;
for(i=2;i<=n;i++)
{
    a[i]=a[i-1]+a[i-2];
}
printf("%d\n",a[i-1]);
return 0;

}
