#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
 int a[10],i,n,t,num=0,e=0,j;
     int c;
 scanf("%d",&t);
for(j=0;j<t;j++)
{
        e=0;
        num=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
     if(a[i]>='0' && a[i]<='9')
     {
         num++;
     }
     if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='z'))
     {
         e++;
     }



 }

        c=num-e;
    if (c>0)
    {
        printf("NUMBERS\n");
    }
   else if (c<0)
    {
        printf("ALPHABET\n");
    }

}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
