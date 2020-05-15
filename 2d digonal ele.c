#include<stdio.h>
# define size 10
void display (int a[size][size],int r,int c);
void read (int a[size][size],int r,int c);
void dig (int a[size][size],int r,int c);
main()
{
    int a[size][size],r,c;
    printf("enter value of row & column\n");
    scanf("%d%d",&r,&c);
    if(r<10 && r>0 && c<10 && c>0)
    {
    read (a,r,c);
    display (a,r,c);
    if (r==c)
    {
        printf("it is a square matrix\n");

        dig (a,r,c);
    }
    else
    {


        printf("it is not a square matrix\n");


}    }
    else
    printf("invalid input\n");

}
void display (int a[size][size],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
/*    {*/
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
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
void dig (int a[size][size],int r,int c)
{
    int i,j,sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {


            if(i==j)
            {
                printf("%d\t",a[i][j]);
            }
    }
    }

}
