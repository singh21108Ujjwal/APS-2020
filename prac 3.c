#include<stdio.h>
#define size 10
void read(int a[size],int m);
void display(int a[size],int m);
void check(int a[size],int m);
 main()
{
    int a[size],m;
    printf("enter the no.of elements\n");
    scanf("%d",&m);
    if(0<m<10)
    {
        read(a,m);
        display(a,m);
        check(a,m);

    }
}
void read(int a[size],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[size],int m)
 {
     int i;
     for(i=0;i<m;i++)
     {
         printf("%d",a[i]);
     }
     printf("\n");
 }
 void check(int a[size],int m)
 {
     int key,flag=0,i;
     printf("enter the key to check\n");
     scanf("%d",&key);
     for(i=0;i<m;i++)
     {
         if(a[i]==key)
         {
             flag++;
         }
     }
     if(flag==0)
     {
         printf("key is not present\n");

     }

     else
        printf("%d is present & repeated %d times\n",key,flag);
 }
