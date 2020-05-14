#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,n,sum=0;
    bool flag=false;
    cout<<"Enter no of elements in an array:- ";
    cin>>n;
    int a[n];
    cout<<"Enter the element to search for:- ";
    cin>>k;
    cout<<"Enter elements of array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    set<int> st;
    for(i=0;i<n;i++)
    {
        
        sum+=a[i]-k;
        cout<<sum<<" ";
        if(st.find(sum)!=st.end())
        {
            flag=true;
            //break;
        }
        st.insert(sum);
        
    }
    if(flag)
    {
        cout<<"Sub-array with sum "<<k<<" is present\n";
    }
    else
        cout<<"Sub-array with sum "<<k<<" is NOT present\n";
    return 0;
}