#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0;
        int a[n];int b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
        {
            if(a[i]>b[i])
                sum+=b[i];
            else
                sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;

}
