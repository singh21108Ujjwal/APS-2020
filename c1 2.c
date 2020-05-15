#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s1[1000];
    int i,n,cs=0,me=0;
    scanf("%d",&n);
    if(n>0 && n<=1000)
    {

        for(i=0;i<n+1;i++)
        {

          scanf("%s",s1[i]);
        }
        for(i=0;i<n+1;i++)
        {
            if(s1[i]=='h')
            {
                cs++;
            }
            if(s1[i]=='t')
            {
                me++;
            }
        }
        if(cs>me)
            printf("computer science");
        if(cs==me)
       {

           scanf("%c",s1[i-1]);

            if(s1[i-1]=='h')
            {
                cs++;
            }
             else if(s1[i-1]=='t')
            {
                me++;
            }
           if(cs>me)
               printf("computer science");
           if(me>cs)
               printf("mechanical");

       }
        else if(me>cs)
            printf("mechanical");

    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
