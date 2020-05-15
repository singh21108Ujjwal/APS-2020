#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define size 10000
#define iters 100000

int search(int a[])
{
    int i,key;


    key=-1;
    for(i=0;i<size;i++)
    {

        if(a[i]==key)
        {
           break;
        }

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
