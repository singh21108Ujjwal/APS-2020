#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,t;
    cout<<"Enter the no of numbers to check:- ";
    cin>>t;
    while(t--)
    {
        cout<<"Enter no:- ";
        cin>>n;
        if(n!=0 && (n &(n-1))==0)
            cout<<n<<" is power of 2\n";
        else
            cout<<n<<" is not power of 2\n";
    }
}