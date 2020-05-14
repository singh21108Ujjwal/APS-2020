#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n,i,j;
	cin>>t;
	while(t--)
	{   
	    int flag=0;
	    set<int> st;
        set<int> ::iterator it;
	    cin>>n;
        int a[n];
        j=-1;
	    for(i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
        for(i=1;i<=n;i++)
        {
            if(st.find(a[i])!=st.end())
	        {
	            it=st.find(a[i]);
	            break;
	        }
	        st.insert(a[i]);
        }
	    
	        cout<<*it<<endl;
	}
	return 0;
}