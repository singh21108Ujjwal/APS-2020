#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int max_so_far=0;
    int max_ending_here=0;
    int temp;
    int n,i;
    cout<<"Enter the size of array:- ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    vector<int>::iterator it=v.begin();
    for(it;it<v.end();it++)
    {
        max_ending_here=max_ending_here+*it;
        if(max_ending_here>max_so_far)
        {
            max_so_far=max_ending_here;
        }
        if(max_ending_here<0)
            max_ending_here=0;
    }
    cout<<max_so_far<<endl;
    return 0;
}