#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,m,n,i,j,r,c,q,count1=0;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m>>q;
	    int a[n][m];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            a[i][j]=0;
	        }
	    }
	    while(q--)
        {
            cin>>r>>c;
            for(i=0;i<m;i++)
            {
               a[r-1][i]+=1;
            }
            for(i=0;i<n;i++)
            {
               a[i][c-1]+=1;
            }
            /*for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl;
            }*/
            //cout<<"############\n";
        }

        for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            if((a[i][j]%2) != 0)
                   {
                        count1++;

                   }
	        }
	    }
	    cout<<count1<<endl<<endl;
    }
}
