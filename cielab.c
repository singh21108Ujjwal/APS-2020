#include<stdio.h>
#include<stdlib.h>
int counts(int );
int main()
{
int a,b,e,m;
scanf("%d%d",&a,&b);
if((a>0 && a<=10000) && (b>0 && b<=100000))
{


int i,j,n;
j=abs(a-b);
int c=counts(j);
m=j+1;
e=counts(m);
n=j%10;
if(n==9)
{
    printf("%d",j-1);
}
else if(e==c)
{
    printf("%d\n",m);
}
else
    printf("%d\n",m-2);
return 0;
}


}
int counts(int j)
{
int count=0;
    while(j)
{
    j=j%10;
    j=j/10;
    count++;
}

return count;
}
