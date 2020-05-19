#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return(b,a%b);
}
int main()
{
    cout<<"Enter no to compute gcd of two no(in sorted way):- ";
    int a,b;
    cin>>a>>b;
    cout<<"GCD of two no are  "<<gcd(a,b)<<endl;
    return 0;
}