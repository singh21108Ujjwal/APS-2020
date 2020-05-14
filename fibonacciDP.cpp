#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the no to find fibonacci:- ";
    cin>>n;
    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<=n;i++)
    {
        fib[i]=fib[n-1]+fib[n-2];
    }
    cout<<"Fibonacci equivalent of given no is:-"<<fib[n]<<endl;
    return 0;
}