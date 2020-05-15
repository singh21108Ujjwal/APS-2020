#include<stdio.h>
# define size 10
void display (int a[size][size],int r,int c);
void read (int a[size][size],int r,int c);
void sum (int a[size][size],int r,int c);
main()
{
    int a[size][size],r,c;
    printf("enter value of row & column\n");
    scanf("%d%d",&r,&c);
    if(r<10 && r>0 && c<10 && c>0)
    {
    read (a,r,c);
    display (a,r,c);
    sum (a,r,c);

    }
    else
    printf("invalid input\n");

}
void display (int a[size][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    printf("\n");
}
void read (int a[size][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d\t",&a[i][j]);
    }
}
void sum(int a[size][size],int r,int c)
{
    int i,j,sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            sum=sum+a[i][j];
    }
    printf("sum of matrix is %d",sum);
}
