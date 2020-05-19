#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[count++]=a[i];
        }
    }
    while(count<n){
        a[count++]=0;    
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}