#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,n,m,u;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        int a[n][k];
        for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            {
                cin>>a[i][j];
            }
        }
        //cout<<m<<" ";
        for(i=0;i<n;i++)
        {
            u = (rand() % m);
            if (u==0)
                cout<<"1"<<" ";
            else
                cout<<u<<" ";
        }
        cout<<"\n";

    }
}