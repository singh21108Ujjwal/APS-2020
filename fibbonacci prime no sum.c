#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,x,y,flag=0,sum=0;
    scanf("%d",&n);
    unsigned long int a[n+1];
    a[0]=0;
    a[1]=1;
    for(i=2;i<n+1;i++)
    {
        a[i]=a[i-2]+a[i-1];
    }
   scanf("%d%d",&x,&y);
   for(i=x;i<y+1;i++)
   {
    flag=0;
    for(j=2;j<a[i]/2;j++)
    {
        if(i%j==0)
        {
          flag++;
          break;
        }
        }
        if(flag==0)
            sum=sum+a[i];


    }printf("%Lu",sum);
    }
