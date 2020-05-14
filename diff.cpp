#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,k=0,n1;
    cout<<"Enter no tho find difference :- ";
    cin>>n;
    n1=n;
    while(n)
    {
        j=n%10;
        k=(k*10)+j;
        n=n/10;
    }
    n=n1-k;
    cout<<n;
    return 0;
}