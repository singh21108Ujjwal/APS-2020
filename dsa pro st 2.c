#include<stdio.h>
int main()
{
    char s1[10],s2[10];
    char *p1,*p2;
    p1=s1;
    p2=s2;
    printf("enter string s1\n");
    scanf("%[^\n]s",s1);
    printf("%s",s1);
    while(*p1)
    {
        *p2=*p1;
        p1++;
        p2++;
    }
    p2='\0';
    printf("copied string is s2:%s",s2);
    return 0;
}
