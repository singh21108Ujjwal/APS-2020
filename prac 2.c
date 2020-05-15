#include<stdio.h>
#define size 10

int main()
{
    int a[size][size],m,i,j,flag;
    printf("enter the no. of rows of a square matrix\n");
    scanf("%d",&m);
    if(0<m<10)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }

        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
               printf("%d\t",a[i][j]);
            }
            printf("\n");

        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                a[j][i]=a[i][j];
                printf("%d\t",a[j][i]);
                if(a[i][j]!=a[j][i])
                {
                    flag=1;
                    break;
                }
            }
            printf("\n");
        }
        if(flag==1)
        {


            printf("not symmetric matrix\n");
        }
        else
            printf("symmetric matrix\n");
    }
}
