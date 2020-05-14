#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
	int i,n,j;
    cin>>n;
    int a[n];
    int dp[n];
    int mxm=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);  
	dp[n-1]=1; 
	for (i=(n-2);i>=0;i--)
    { 
        mxm=0; 
		for (j=(i+1);j<n;j++) 
			if (a[j]%a[i]==0) 
				mxm=max(mxm,dp[j]); 

		dp[i]=1+mxm; 
	} 
	cout<<*max_element(dp,dp+n)<<endl;; 
	return 0; 
} 
