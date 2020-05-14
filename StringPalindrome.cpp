#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,flag=0,n;
    string str1;
    cout<<"Enter string to check for :- ";
    cin>>str1;
    n=str1.length();
    //cout<<n;
    for(i=0;i<ceil(n);i++)
    {
        //cout<<str1[i]<<" "<<str1[n-i-1]<<endl;
        if(str1[i]!=str1[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"It is Palindrome string\n";
    else
        cout<<"It is NOT Palindrome string\n";
    return 0;
}