#include<bits/stdc++.h>
using namespace std;
//multiply() finction is taken from URL:"https://www.geeksforgeeks.org/multiplication-two-numbers-shift-operator/"

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long int t,n,i,j,count,oddc;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unsigned long int a[n];
        count=0;
        oddc=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
                oddc++;
            else{
                if(a[i]%4==0)
                {
                    count+=(n-i);
                    count += (oddc*(oddc+1)/2);
                    count += oddc*(n-i);
                    oddc=0;
                }
                else{
                    for(j=i+1;j<n;j++){
                        if(a[j]%2==0)
                            break;
                    }
                    count += (n-j);
                    count += (oddc*(oddc+1)/2);
                    count += oddc*(n-j);
                    oddc=0;
                }
            }
        }
        count+=oddc*(oddc+1)/2;
        cout<<count<<"\n";

    }
}