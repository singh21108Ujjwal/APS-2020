#include<stdio.h>
# define size 10
void display (int a[size][5],int r);
void read (int a[size][5],int r);
void avg (int a[size][5],int r);
main()
{
    int a[size][5],r;

    printf("enter value of n0. of studentsn\n");
    scanf("%d",&r);
    if(r<10 && r>0 )
    {
    read (a,r);
    display (a,r);
    avg (a,r);
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
void avg (int a[size][5],int r)
{
    int i,j;
    float median,sum=0;
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<5;j++)
        {
            sum=sum+a[i][j];


        }
        median=sum/5.00;
        printf("avg of student %d is %f",i+1,median);
    }
}

