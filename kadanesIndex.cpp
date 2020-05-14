#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,start,end,s;    
    int max_so_far=0;
    int max_ending_here=0;
    cout<<"Enter no of elements:-";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        max_ending_here=max_ending_here+a[i];
        if(max_ending_here>max_so_far)
        {
            max_so_far=max_ending_here;
            end=i;
            start=s;
        }
        if(max_ending_here<0)
        {
             max_ending_here=0;
             s=i+1;
        }
                      
    }
    cout<<"Maximum sum so far is "<<max_so_far<<endl;
    cout<<"Starting index:- "<<start<<"  last index:- "<<end<<endl;
    return 0;
}