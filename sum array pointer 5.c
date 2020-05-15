#include<stdio.h>
#include<stdio.h>
int main()
{
    int a[100],n,s=0,i;
    int *p;
    p=a;
    printf("enter how many no. to add\n");
    scanf("%d",&n);
    printf("enter %d no\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=a;
    for(i=0;i<n;i++)
    {
        s=*p+s;
        p++;
    }
    printf("%d",s);
    return 0;

}
