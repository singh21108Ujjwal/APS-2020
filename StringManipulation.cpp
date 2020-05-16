#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        j=s.length();
        int sflag,aflag,iflag;
        sflag=aflag=iflag=0;
        for(i=0;i<j;i++)
        {
            if(isdigit(s[i])==true)
                iflag=1;
            else if(((s[i])>=65 && (s[i])<=90) || ((s[i])>=97 && (s[i])<=122))
                sflag=1;
                          

        }
        if(iflag && sflag)
            cout<<"Its an AlphaNumeric\n";
        else if(iflag)
            cout<<"Valid Format\n";
        else
            cout<<"Its a String\n";
    }
}