#include<bits/stdc++.h>
using namespace std;
int min(int x, int y) { return (x < y) ? x : y; } 
int main()
{
    int i,j,n;
    cout<<"Enter array size:- ";
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int minJump[n];
    int fromWhereWeJump[n];
    //memset(minJump,INT_MAX,n);
    //memset(fromWhereWeJump,INT_MAX,n);
    fill_n(minJump,n,INT_MAX);
    minJump[0]=0;
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(i<=j+a[j])
            {
                minJump[i]=min(minJump[i],(minJump[j]+1));
                //cout<<minJump[i]<<" ";
            }
        }
    }
    cout<<"Minimum numbers of jump required to reach end of array is:- "<<minJump[n-1];
    cout<<endl;
    return 0;
}