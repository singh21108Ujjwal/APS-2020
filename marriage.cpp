#include<bits/stdc++.h>
int main()
{
    int i,j,k,m,n;
    cin>>n;
    int a[n*n];
    int b[n*n];
    for(i=0;i<(n*n);i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    for(i=0;i<(n*n);i++)
    {
        //cin>>a[i];
        b[i]=0;
    }
    for(i=1;i<=(n*n);i++)
    {
        for(j=0;j<(n*n);j++)
        {
            if(a[j]==i)
            {
                b[i]=1;
                break;
            }
        }
    }
    
}