#include<bits/stdc++.h>
using namespace std;

int josephus(int n,int k)
{
    int res=0;
    for(int i=1;i<=n;i++)
    {
        res=(res+k)%i;
    }
    return (res+1);
}


/*if k is in power of 2 than always 1st persion will be allive*/
int main()
{
    int k,n;
    cout<<"Enter no. of players :- ";
    cin>>n;
    cout<<"Enter the killing sequence no :- ";
    cin>>k;
    cout<<"Player no which will alive is "<<josephus(n,k)<<endl;
    return 0;
}