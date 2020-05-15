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
    fflush(stdin);
    printf("enter string s2\n");
    scanf("%[^\n]s",s2);
    printf("%s",s2);
    while(*p2==*p1)
    {
        if(*p2=='\0')
            break;
        p1++;
        p2++;
    }
    int result=*p2-*p1;
    if(result==0)
        printf("both strings are same\n");
    else if(result>0)
        printf("string 2 is grater\n");
    else
        printf("string 1 is greater\n");
    return 0;

}
