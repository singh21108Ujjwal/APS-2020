#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,a,b,v;
    float u;
    cin>>n>>m>>a>>b;
    u=b/m;
    if(m>=n && b<=(n*a))
    {
        cout<<b<<endl;
    }
    else if(u<a)
    {
        i=n/m;
        j=n%m;
        v=(b*i)+(j*a);
        cout<<v<<endl;
    }
    else
    {
        cout<<n*a<<endl;
    }
    return 0;
}