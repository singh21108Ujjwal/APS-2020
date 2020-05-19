#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter array size :- ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=0;
    j=n-1;
    while(1)
    {
        while(a[i]<0 && i<j)
            i++;
        while(a[j]>0 && i<j)
            j--;
        if(i<j)
        {
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
            i++;
            j--;
        }
        else
        {
            break;
        }
        
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
