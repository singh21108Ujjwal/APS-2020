#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    int n=4;
    int a[n+1];
    memset(a,0,n+1);
    for(i=0;i<n;i++)
    {

        for(j=min(i,k);j<k;j++)
        {
            a[j]=a[j]+a[j-1];
        }
    }
    cout<<a[2];
}
