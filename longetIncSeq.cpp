#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,count=1,n,max1=1;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter array Elements\n";
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            count+=1;
            max1=max(count,max1);
        }
        else
            count=1;
    }
    cout<<max1<<endl;
}