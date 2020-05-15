#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{  long int a[10^15];
 int p,i,j,sum=0;
 scanf("%d",&p);
 for(i=0;i<p;i++)
 {
     scanf("%li",&a[i]);
     sum=sum+a[i];
 }
 if(sum%8==0)
     printf("1\n");
 else
     printf("-1");


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
