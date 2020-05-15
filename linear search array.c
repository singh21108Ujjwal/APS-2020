#include<stdio.h>
#define size 10
int main()
{
    int a[size],i,k,n,j=0;
    printf("enter the key want to check\n");
    scanf("%d",&k);
    printf("enter the size of array\n");
    scanf("%d",&n);
    if(n>0 && n<11)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
            if(a[i]==k)
            {
                j++;

            }
        }
        printf("%d is present & it is repated %d times\n",k,j);
        if(i==n-1)
        {
            printf("key is not present in given set of no.\n");
        }
    }
    else
        printf("invalid input\n");
    return 0;
}
