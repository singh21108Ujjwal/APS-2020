#include<stdio.h>
main()
{
    int i=0,n,os=0,es=0;
    printf("enter n\n");
    scanf("%d",&n);
    while(i<=n)

       if (i%2==0)
            es=es+i;
            i++;}



        else
            os=os+i;
             i++;
      printf("es=%d&0s=%d",es,os);
}
