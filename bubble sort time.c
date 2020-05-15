#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define size 100000
#define iters 1

int search(int a[])
{
    int i,j;
    int swap;
    for(i=0;i<size-2;i++)
    for(j=0;j<size-2-i;j++)
        if(a[i]<a[i+1])
    {
        swap=a[i];
        a[i]=a[i+1];
        a[i]=swap;
    }


}
int main()
{
    int a[size],i,key;

    clock_t start,end;
    int j;

    for(i=0;i<size;i++)
        a[i]=rand()%1000;
    start = clock();
    for(j=0;j<iters;j++)

   {

    search(a);

   }end =clock();
    double t;
    t=(end-start)/CLOCKS_PER_SEC;
    printf("%g is time taken",t);

    return 0;
}
