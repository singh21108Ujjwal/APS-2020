#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int j,m,t,a[25];
    scanf("%d",&t);
    int i;

    int n[t];
    m=0;
    a[0]=1;
    i=1;
    while(i<25)
    {
        if(i%2!=0)
            a[i]=(a[i-1]*2)-1;
        else
            a[i]=(a[i-1]*2)+1;

        i++;
    }
    while(m<t)
    {
        scanf("%d",&n[m]);
        m++;
    }
    m=0;
    while(m<t)
    {
        j=n[m];
        i=pow(2,j);

        printf("%d",a[j-1]);
        printf(" ");
        printf("%d",i);
        printf(" ");
        m++;
    }
    return 0;
}
