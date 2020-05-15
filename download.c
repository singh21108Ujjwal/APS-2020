#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[10][2],k,q;
    printf("enter no. of recipe to learn\n");
    scanf("%d",&n);
    printf("enter upper & lower limit for the recipie\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
             scanf("%d",&a[i][j]);
        }

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
             printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter the no. of group\n ");
    scanf("%d",&q);

}
