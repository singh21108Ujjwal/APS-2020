#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    int *p1,*p2;
    printf("enter two no. for addition\n");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;
    printf("%d",*p1+*p2);
    return 0;
}
