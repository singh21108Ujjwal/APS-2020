#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,c1,c2,i,n,m,p,q;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&m);

        int b[m];
        for(i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
        }
        scanf("%d",&p);
        int c[p];
        c1=p;
        for(i=0;i<p;i++)
        {
            scanf("%d",&c[i]);
        }
         scanf("%d",&q);
        int d[q];
        c2=q;
        for(i=0;i<q;i++)
        {
            scanf("%d",&d[i]);
        }
        int j=0;
        int count=0;
        for(i=0;i<p;i++)
        {
            j=0;
        while(j<n)
        {
            if(c[i]==a[j])
            {
                count++;
                break;
            }
            j++;
        }}
        j=0;
        int counts=0;
        for(i=0;i<q;i++)
        {
            j=0;
            while(j<m)
            {
                if(d[i]==b[j])
                {
                    counts++;
                    break;
                } j++;
            }

        }

        printf("%d\t%d",count,counts);
        if(count==c1 && counts==c2)
            printf("yes\n");
        else
            printf("no\n");

    }
}
