#include<stdio.h>
#include<stdlib.h>
int main()
{
int t,n,i,j;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    int a[n];
    for(i=1;i<n+1;i++)
    {
        scanf("%d",&a[i]);
    }
    int flag=0;
    for(i=1;i<n+1;i++)
    {
        for(j=i+1;j<n+1;j++)
        {
            if(a[j]!=a[i] && a[a[j]]==a[a[i]])
            {
                flag++;
                break;
            }


        }
        if(flag==1)
            break;
    }
    if(flag==1)
        printf("Truly Happy\n");
    else
        printf("Poor Chef\n");
}
    return 0;

}
