#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define size 10000
#define iters 100000

int add(int a[])
{
    int result =0;
    int i;
    for(i=0;i<size;i++)
    result=result +i;
}
int main()
{
    int a[size],i;
    clock_t start,end;
    int j;

    for(i=0;i<size;i++)
        a[i]=rand()%1000;
    start = clock();
    for(j=0;j<iters;j++)

   {

    add(a);

   }end =clock();
    double t;
    t=(end-start)/CLOCKS_PER_SEC;
    printf("%g is time taken",t);

    return 0;
}
