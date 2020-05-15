#include<stdio.h>
void read(int a[6]);
void display(int a[6]);
void deviation(int a[6],int b[6]);
int main()
{
    int i,j,a[6],b[6],c[6];
    printf("enter expected student marks");
    read(a);
    display(a);
    printf("enter actual marks\n");
    read(b);
    dispaly(b);
    deviation(a,b);


}
void read(int a[6])
{
    int i;
    for(i=0;i<6;i++)
    {
        scanf("%d",(a+i));
    }
}
void display(int a[6])
{
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d",(a+i));
    }
}
void deviation(int a[6],int b[6])
{
    int c[6];
    int i;
    for(i=0;i<6;i++)
    {
        c[i]=a[i]-b[i];
        display(c);

    }
}
