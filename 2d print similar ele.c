#include<stdio.h>
# define size 10
void display (int a[size][3],int r);
void read (int a[size][3],int r);
void max (int a[size][3],int r,int b[size][3],int c);
main()
{
    int a[size][3],r,b[size][3],c;

    printf("enter 3   students\n");
    scanf("%d",&r);
    printf("emter 3 elements\n");
    scanf("%d",&c);
    if(r<10 && r>0 )
    {
    read (a,r);
    read(b,r);
    display (a,r);
    display(b,r);
    max (a,r,b,r);
    }
    else
    printf("invalid input\n");

}
void display (int a[size][3],int r)
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
void read (int a[size][3],int r)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<5;j++)
            scanf("%d\t",&a[i][j]);
    }
}
void max (int a[size][3],int r,int b[size][3],int c)
{
    int i,j,sim;

for(i=0;i<size;i++)
{
    for(j=0;j<3;j++)
    {
        if(a[i][j]==b[i][j])
        {
            printf("%d\t",a[i][j]);
        }
    }
}
}


