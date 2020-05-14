#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,k,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            j+=(a[i]%k);
        }
        if(j%2==0)
            m=j/2;
        else
            m=(j/2)+1;
        if((m/n)>=1)
        {
            
        }
    }
}