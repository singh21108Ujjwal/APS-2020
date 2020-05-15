#include<stdio.h>
main()
{
    int arr[]={10,20,30,15,60,56};
    int *i,*j;
    i=&arr[1];
    printf("%d\n",i);

    j=&arr[5];
    printf("%d\n",j);
    printf("%d\n%d\n",j-i,*j-*i);
}
