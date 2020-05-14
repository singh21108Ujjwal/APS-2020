#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    bool flag=false;
    cout<<"Enter no of elements in an array:- ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    set<int> st;
    for(i=0;i<n;i++)
    {
        st.insert(sum);
        sum+=a[i];
        if(st.find(sum)!=st.end())
        {
            flag=true;
            break;
        }
        
    }
    if(flag)
    {
        cout<<"Sub-array with sum 0 is present\n";
    }
    else
        cout<<"sub-arry with sum 0 is not present\n";
    return 0;
}