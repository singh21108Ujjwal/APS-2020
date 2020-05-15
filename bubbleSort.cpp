#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a;
    cout<<"Enter no of elements to sort:- ";
    cin>>n;
    int v[n];
    cout<<"Enter elemets\n";
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<n-1;i++)
    {   int flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(v[j]>v[j+1])
            {
                v[j]=v[j]+v[j+1];
                v[j+1]=v[j]-v[j+1];
                v[j]=v[j]-v[j+1];
                flag=1;  
            }
            if(flag==0)
                break;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}