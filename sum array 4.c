#include<stdio.h>
#include<stdio.h>
int main()
{
    int a[100],n,s=0,i;
    printf("enter how many no. to add\n");
    scanf("%d",&n);
    printf("enter %d no\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=a[i]+s;
    }
    printf("%d",s);
    return 0;

}
