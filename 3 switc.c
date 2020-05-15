#include<stdio.h>
int main(void)
{
int a;
    float div=0,n1,n2;
    scanf("%f%f",&n1,&n2);
    scanf("%d",&a);
    switch(a)
    {

     case 1:div=n1+n2;
     break;
     case 2:div=n1-n2;
     break;
     case 3: div=n1*n2;
     break;
     case 4:if(n2!=0)
     div=n1/n2;
     else
printf(" invalid input\n");
        break;

     default:printf("invalid value");
      break;
    }
    printf("%f",div);
    return 0;
}
