#include<stdio.h>
#define c 100
main()
{

    char line [c];
    do
    {
        ch=getchar();
        line [c]=ch;
        c++;
    }
    while(ch!='\n')
    {
        c=c-1;
        line [c]='\0';

    }
    printf("%s",line [c]);
}
