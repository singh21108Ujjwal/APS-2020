#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,max,min;
    cout<<"Enter size of array:- ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        {
            min=a[i];
            max=a[i];
        }
        else
        {
            if(a[i]>max)
                max=a[i];
            if(a[i]<min)
                min=a[i];
        }
    }
    cout<<"Range of array is "<<max-min<<endl;
    return 0;
}