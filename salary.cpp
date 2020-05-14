#include <stdio.h>

int main(void) {
    int i,j,t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int k=0;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];   
        }
        j=a[0];
        for(i=0;i<n;i++)
        {
             if(a[i]>j)
                j=a[i];
        }
        for(i=0;i<n;i++)
        {
            m=j-a[i];
            k+=m;
        }
        cout<<k<<endl;
    }
	// your code goes here
	return 0;
}

