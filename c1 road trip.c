#include<stdio.h>
int main()
{
    int a[10][2],i,j,s[10],n,max=0,b[10],min=0,c[10];
    scanf("%d",&n);
    if(n>=0 && n<10)
    {
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<2;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<n+1;i++)
        {
            s[i]=(a[i][0])*(a[i][1]);
            printf("%d\n",s[i]);
        }
        for(i=1;i<n+1;i++)
        {
            b[i]=s[0]-s[i];
            printf("%d\n",b[i]);
        }
        max=b[1];
        for(i=1;i<n+1;i++)
        {
            if(max<b[i])
            {
                max=b[i];
            }

        }
        printf("%d\n",max);

         min=b[1];
        for(i=1;i<n+1;i++)
        {
            if(min>b[i])
            {
                min=b[i];
            }
        }
         printf("%d\n",min);



    }
    else
        printf("NULL");
    return 0;
}
