#include<bits/stdc++.h>
using namespace std;
int compute(int n,int k)
{
    if(k==0 || n==k)
        return 1;
    else
        return compute(n-1,k-1)+compute(n-1,k);
}
int main()
{
    int b=compute(4,5);
    cout<<b<<endl;
}
