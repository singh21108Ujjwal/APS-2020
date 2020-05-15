#include<stdio.h>
# define size 10
void display (int a[size][5],int r);
void read (int a[size][5],int r);
void max (int a[size][5],int r);
main()
{
    int a[size][5],r;

    printf("enter value of n0. of studentsn\n");
    scanf("%d",&r);
    if(r<10 && r>0 )
    {
    read (a,r);
    display (a,r);
    max (a,r);
    }
    else
    printf("invalid input\n");

}
void display (int a[size][5],int r)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
    printf("\n");
}
void read (int a[size][5],int r)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<5;j++)
            scanf("%d\t",&a[i][j]);
    }
}
void max (int a[size][5],int r)
{
    int i,j,maxi;

maxi=a[0][0];
    for(i=0;i<r;i++)
    {

        for(j=0;j<5;j++)
        {

           if(maxi<a[i][j])
           {
               maxi=a[i][j];

           }

        }

        printf("maximum in row %d is %d\n",i+1,maxi);
    }
}


