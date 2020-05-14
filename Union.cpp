#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n];
        int b[m];
        int count=0,i;
        set<int> st;
        //set<int> ::iterator it=st.begin();
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(st.find(a[i])==st.end())
            {
                st.insert(a[i]);
                count++;
                //cout<<a[i]<<"\t";
            }
                
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
            if(st.find(b[i])==st.end())
            {
                st.insert(b[i]);
                count++;
                //cout<<b[i]<<"\t";
            }
        }
        
        cout<<count<<endl;
        
    }
	//code
	return 0;
}