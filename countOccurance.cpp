#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    char b;
    int i=0;
    int count=0;
    cout<<"Enter string:- ";
    cin>>a;
    cout<<"Enter character to search for;- ";
    cin>>b;
    while(a[i])
    {
        if(a[i]==b)
            count++;
        i++;
    }
    cout<<count<<endl;;
    return 0;
}