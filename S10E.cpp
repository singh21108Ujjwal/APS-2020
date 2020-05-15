#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,m,n,t,min;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    int counter=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int u=0;
	    int k,p=0;
	    while(p<4)
	    {
	      for(i=0;i<p+1;i++)
	      {
	          if(a[i]>a[p+1])
	          {
	             counter++;
	          }

	      }

	       if(counter==(p+1))
	          {
	              count++;
	               cout<<a[p+1]<<"\t";
	          }

	       p++;
	    }
	    cout<<"count1:"<<count<<endl;

	    while((u+6)<=n)
	    {

	   // cout<<"u:"<<u<<endl;
	    for(i=u;i<(u+5);i++)
	    {
	        if(a[i]>a[u+5])
	            {
	               counter++;

	            }
	    }
	    //cout<<"Min:"<<min<<endl;
	   if(counter==5)
	        count++;
	    u+=1;
}
     cout<<count+1<<endl;

	}
}
