#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1 || n==2)
        cout<<"NO\n";
    else{
    int k=(n & 1);
    //cout<<k;
    if(k==1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    }
    return 0;
}