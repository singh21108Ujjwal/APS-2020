#include<stdio.h>
#include<stdlib.h>
 int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );}
int main()
{
    int i=0,t,n,c,co=0;
    scanf("%d",&t);
    while(t--)
    {i=0;
        scanf("%d%d",&n,&c);
        long int u[n],max;
        while(i<n)
        {
            scanf("%ld",&u[i]);
            i++;
        }
        qsort(u, n, sizeof(long int), cmpfunc);
        for(i=0;i<n;i++)
        {
            printf("%ld\t",u[i]);
        }
        i=0;
        while(c--)
        {
         printf("#####\n");

        max=u[n-1];

        while(1)
        {
            if(u[n-1-i]==max)
                {co++;
                i++;}
            else
                break;
        } i++;}
        printf("%d\n",co);



    }
}
