#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+5];
        int flag=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=n;i<(n+5);i++)
        {
            a[i]=0;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                for(j=1;j<=5;j++)
                {
                    if(a[j+i]==1)
                        {
                            flag=1;
                        }
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}