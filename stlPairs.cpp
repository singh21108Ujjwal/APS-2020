#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p;
    cout<<"Enter elements of pair:- ";
    cin>>p.first>>p.second;
    cout<<p.first<<" "<<p.second<<endl;
    cout<<"Pairs in array\n";
    pair<int,int> arr[]={{1,2},{3,4}};
    for(int i=0;i<2;i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    return 0;
} 