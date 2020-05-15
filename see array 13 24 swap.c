#include<stdio.h>
#define size 10
void read(int a[size],int m);
void display(int a[size],int m);
void swap(int a[size],int m);
main()
{


int a[size],m;
printf("enter 4 digits\n");

    read(a,m);
    display(a,m);
    swap(a,m);

}
void read(int a[size],int m)
{
    int i=0;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[size],int m)
{
     int i=0;
    for(i=0;i<m;i++)
    {
        printf("%d\t",&a[i]);
    }
}
void swap(int a[size],int m)
{
    int i,c[i],b[i],t,rem;
    for(i=0;i<m;i++)
    {
        c[i]=a[i]+7;
        rem=c[i]%10;
    }
    for(i=0;i<m;i++)
    {


    t=c[i];
    c[i]=b[i+2];
    t=b[i];
    display(c,m);
    }
}
