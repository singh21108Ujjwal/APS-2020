#include<bits/stdc++.h>
using namespace std;

int maxSubArraaySum(int a[],int n)
{
    int i=0;
    int max_so_far=0;
    int max_ending_here=0;
    for(i=0;i<n;i++)
    {
        max_ending_here=max_ending_here+a[i];
        if(max_ending_here>max_so_far)
        {
            max_so_far=max_ending_here;
        }
        if(max_ending_here<0)
        {
            max_ending_here=0;
        }
    }
    return max_so_far;
}

int main()
{
    int i,n;
    cout<<"Enter the no elements:- ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"mximum subarray sum is "<<maxSubArraaySum(a,n)<<endl;
    return 0;

}