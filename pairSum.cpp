#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,n,i=0,sum=0;
    int count=0;
    cout<<"Enter size of Vector:- ";
    cin>>n;
    cout<<"Enter the sum to find for:- ";
    cin>>sum;
    vector<int> v;
    //vector<int> ::iterator it=v.begin();
    cout<<"Enter elemets to vector\n";
    while(i<n)
    {
        cin>>l;
        v.push_back(l);
        i++;
    }
    sort(v.begin(),v.end());//sort(v.begin(),v.end(),greator<int>()) for sorting in descending order
    l=0;
    r=n-1;
    while(l<r)
    {
        if(v[l]+v[r]>sum)
            r--;
        else if(v[l]+v[r]<sum)
            l++;
        else
        {
            cout<<v[l]<<" "<<v[r]<<endl;
            count+=1;
            l++;// or r--;
        }        
    }
    if(count==0)
    {
        cout<<"!!!Sorry No match found\n";
    }
    
    return 0;
}