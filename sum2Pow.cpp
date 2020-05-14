#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,sum=0,count=0;
    vector<int> a;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements to array: ";
    for(i=0;i<n;i++)
    {
        cin>>j;
        //a.push_back(j);
        if(j!=1 && (j & (j-1))==0  )
        {
            count+=1;
            sum+=j;
        }

    }
    cout<<count<<" "<<sum<<endl;


}
