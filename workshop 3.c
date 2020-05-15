#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
int a[100],fl;
    int sl,i;
    int n;
    scanf("%d",&n);
     for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    fl=a[0];
    sl=a[1];
    for(i=2;i<n-1;i++)
    {


        if(a[i]>fl)
        {
            sl=fl;
            fl=a[i];
        }
        if(a[i]>sl)
        {
            sl=a[i];
        }
    }
    printf("%d",sl);



}
