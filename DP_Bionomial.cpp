#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    n=5;
    k=3;
    int c[n][k];
    for(i=0;i<n;i++)
    {
        for(j=0;j<min(i,k);j++)
        {
            if(j==0 || j==k)
               c[i][j]=1;
            else
                c[i][j]=c[i-1][j-1]+c[i-1][j];
        }
    }
    cout<<c[n,k]<<endl;
}
