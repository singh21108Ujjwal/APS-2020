#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,flag=0;
    string str;
    set<char> st;
    cout<<"Enter string to serach for duplicate characters:- ";
    cin>>str;
    cout<<"Duplicate elements are:- ";
    for(i=0;i<str.length();i++)
    {
        if(st.find(str[i])!=st.end())
        {
            cout<<str[i]<<" ";
            flag=1;
        }
        st.insert(str[i]);
    }
    if(flag==0)
    {
        cout<<"NONE";
    }
    cout<<endl;
    return 0;
}