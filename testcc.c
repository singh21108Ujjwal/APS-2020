#include<stdio.h>
int main()
{
    int i,n=0,a[100];
    {
        for(i=0;;i++)
    {
        scanf("%d",&a[i]);

         if(a[i]<0 || a[i]>=100)
         {
             break;
         }

             n++;
   }
    for(i=0;i<n;i++)
    {
        if(a[i]==42)
            break;
        else
            printf("%d\n",a[i]);
    }

    }

return 0;

}
