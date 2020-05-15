#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n,i,j,u,k=0,min=0,v;
    long int s[5000],a[5000];
    scanf("%d",&t);
    if(t<=10 && t>=1)
    {
        scanf("%d",&n);
        if(n<=5000 && n>=2)
        {
            for(i=0;i<n;i++)
            {
                scanf("%li",&s[i]);
            }
            s[0]=min;
            for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                { printf("%d",s[k]);
                    s[k]=a[i]-a[j];

                    if(s[k]<min)
                    {
                        min=s[k];
                        u=a[i];
                        v=a[j];
                    }k++;

                }
            }
            printf("%d\t%d\n",u,v);
            printf("min difference is %d",s[k]);
        }
    }
    return 0;
}
