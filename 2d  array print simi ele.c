#include<stdio.h>
#define size 10
void read (int a[3][3]);
void rea (int b[3][3]);
void displa(int b[3][3]);
void display(int a[3][3]);
void sim(int a[3][3],int b[3][3]);
void main()
{
    int a[3][3],b[3][3];
    read (a);
    rea (b);

    display(a);
    displa(b);
    sim(a,b);
    return 0;
}
void read (int a[3][3])
{
    int i,j;
    for(i-0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[j][j]);
        }
    }
}
void rea (int b[3][3])
{
    int i,j;
    for(i-0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[j][j]);
        }
    }
}
void display(int a[3][3])
{
    int i,j;
    for(i-0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",&a[j][j]);
        }
    } printf("\n");
}
void displa(int b[3][3])
{
    int i,j;
    for(i-0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",&b[j][j]);
        }
    } printf("\n");
}
void sim(int a[3][3],int b[3][3])
{
    int i,j;
    for(i-0;i<3;i++)
    {
        for(j-0;j<3;j++)
        {
            if(a[i][j]==b[i][j])
            {
                printf("%d\t",a[i][j]);
            }
        }
    }
}
