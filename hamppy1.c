#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,q,k,j,max,count;
    scanf("%d%d%d",&n,&q,&k);
    int i=0,a[n];
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    getchar();
    char chara[q];
    i=0;
    while(i<q)
    {
        scanf("%c",&chara[i]);
        i++;
    }
    getchar();
    i=0;
    while(i<q)
    {   count=0;
        if(chara[i]=='!')
        {
            int x=a[n-1];
            for(j=n-1;j>=0;j--)

            {
                a[j]=a[j-1];

            }
            a[0]=x;
            //for(j=0;j<n;j++)
            //{
              //printf("%d\t",a[j]);

            //}
            //printf("\n");
        }

        else
        {
        count=0;
        max=0;
        j=0;
        while(j<n)
        {
        if (a[j]==1)
        {   count++;
            if(max<count)
                max=count;
        }
        else
        {
            count=0;
        }
        if(max > k)
            max=k;
        j++;
    }
        printf("%d\n",max);

    }i++;




}}
