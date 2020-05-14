#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k=s.length();
    int count1=0;
    int count2=0;
    int count3=0;
    int flag=0;
    int i;
    for(int i=0;i<s.length();i+=2)
    {
        if(s[i]=='1')
            count1+=1;
        else if(s[i]=='2')
            count2+=1;
        else if(s[i]=='3')
            count3+=1;
    }
    for(i=0;i<count1;i++)
    {
        if(flag==0)
        {
            cout<<"1";
            flag=1;
        }
        else
        {
            cout<<"+1";
        }
        
    }
    for(i=0;i<count2;i++)
    {
        if(flag==0)
        {
            cout<<"2";
            flag=1;
        }
        else
        {
            cout<<"+2";
        }
        
    }
    for(i=0;i<count3;i++)
    {
        if(flag==0)
        {
            cout<<"3";
            flag=1;
        }
        else
        {
            cout<<"+3";
        }
        
    }
    cout<<endl;
    return 0;
}