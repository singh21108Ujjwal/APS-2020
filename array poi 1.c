#include<stdio.h>
void display(int *,int );
 main()
{
    int *j;
    int num[]={24,34,12,44,56,17};
    j=&num[0];
    display(&num[0],6);

}
void dispaly(int *j,int n )
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("element=%d\n",*j);
        j++;
    }
}
