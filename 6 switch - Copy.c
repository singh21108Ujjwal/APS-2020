#include<stdio.h>
main()
{
    float n1,n2,res;
    char a;
    printf("enter n1,n2\n");
    scanf("%f%f",&n1,&n2);
    printf("enter a\n");
    scanf("%*c%c",&a);
    switch('a')
    {
        case '1' :res=n1+n2;
            break;
        case '2' :res=n1-n2;
            break;
        case '3':res=n1*n2;
        break;
        case '4' :{
            if(n2!=0)
            res=n1/n2;
            else

            printf("not possible\n");

           break;
    }


}
 printf("result is %f",res);


}
