#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct confused
 {     int a;

 };

struct more_confused
{     struct confused b;
        char z;
 };

struct still_confused
{     struct more_confused mc;
  float c;
  };

struct lot_confused
{     struct still_confused sc;
   double e;
}lc;

int main()
{
    printf("enter integer a\n",lc.sc.mc.b.a);
    scanf("%d",&lc.sc.mc.b.a);
    printf("%d\n",lc.sc.mc.b.a);
    getchar();
    scanf("%c",&lc.sc.mc.z);
    printf("%c",lc.sc.mc.z);
    scanf("%f",&lc.sc.c);
    printf("%f\n",lc.sc.c);
    scanf("%lf",&lc.e);
    printf("%lf",lc.e);
    return 0;

}
