#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int toh(int n,int from,int to,int aux)
{
    if(n==1)
return n;

    toh(n-1,from,aux,to);
    toh(n-1,aux,to,from);
}
int main()
{
    int n,from,to,aux;
    scanf("%d",&n);
    clock_t start,end;
    int j;


    start = clock();
    toh(n,from,to,aux);
    end =clock();
    double t;
    t=(end-start)/CLOCKS_PER_SEC;
    printf("%g is time taken",t);
    toh(n,from,to,aux);
}
