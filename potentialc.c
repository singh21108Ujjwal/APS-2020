#include<stdio.h>
#include<stdlib.h>
int streak(int a[],int x,int y);
int main()
{int N,q,i,x,y,b[N];
    scanf("%d%d",&N,&q);
    int a[N];
    if(N>=1 && N<=1000 && q>=1 && q<=100000)
    {for(i=0;i<N;i++)
      {scanf("%d",&a[i]);
          if(a[i]<0 && a[i]>1)
        break;}
      for(i=0;i<q;i++)
      {scanf("%d%d",&x,&y);
          if(x>=1 && x<=N && y>=1 && y<=N)
          b[i]=streak(a,x,y);}
      for(i=0;i<q;i++)
      {printf("%d\n",b[i]);
          }}return 0;}
int streak(int a[],int x,int y)
{int prev=0,count=0,i,N;
    if(y<=x)
    {x = x + y;
  y = x - y;
  x = x - y;
} if(x>=1 && x<=N && y>=1 && y<=N)
{  {for(i=x-1;i<y;i++)
    {if(a[i]==1)
        {count++;
            if(prev<=count)
                prev=count;}
        else
            count=0;

    }}return prev;}
    else
        return 0;

}


