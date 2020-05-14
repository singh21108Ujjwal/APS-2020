#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    i=0;
    j=0;
    char str[100]="u j j w a l";
    char str2[100];
    //cout<<"Enter string:- ";
    //getline(cin,str);
    //gets(str);
    //scanf(" %[^/n]s",str);
    while(str[i])
    {
        if(str[i]!=' ')
            str2[j++]=str[i];
            //strcpy(str2[j++],str[i]);
            //cout<<str[j];
        i++;
    }
    str2[j]='\0';
    cout<<str2<<endl;
    return 0;
}
