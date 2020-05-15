#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {j=0;
        while(j<i)
        {
            printf("%d",i);
            j++;
        }
        printf("\n");
    }


}
