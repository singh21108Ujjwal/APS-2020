#include<stdio.h>
int main()
{
    char s1[20],s2[10];
    char *p1,*p2;
    p1=s1;
    p2=s2;
    printf("enter string s1 \n");
    scanf("%[^\n]s",s1);
    printf("%s",s1);
    fflush(stdin);
    printf("\n");
    printf("enter the string 2\n");
    scanf("%[^\n]",s2);
    printf("%s",s2);
    while(*p1)
    {
        p1++;
    }
    while(*p2)
    {
        *p1=*p2;
        p1++;
        p2++;
    }
   *p1='\0';
    printf("concatinating string  is %s",s1);
    return 0;
}
