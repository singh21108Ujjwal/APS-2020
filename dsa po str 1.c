#include<stdio.h>
int main ()
{
    char s1[10];
    char *p;
    p=s1;
    int l=0;
    printf("enter string:");
    scanf("%[^\n]s",s1);
    printf("%s\n",s1);
    while(*p)
    {
        p++;
        l++;
    }
    printf("length of string=%d",l);
    return 0;



}
