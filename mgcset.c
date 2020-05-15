#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        int a[n];
        int i=0,count=0;
        while(i<n)
        {
            scanf("%d",&a[i]);

            if(a[i]%m==0)
                count++;

            i++;
        }
        printf("%d\n",((int)pow(2,count))-1);

    }return 0;
}
