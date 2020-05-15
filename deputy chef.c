#include <stdio.h>
#include<stdlib.h>
int main()
{
	// your code goes here
	int t,n,i,j,max;
	scanf("%d",&t);
	while(t--)
	{   max=0;
	    scanf("%d",&n);
	    int a[n];
	    int d[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&d[i]);
	    }


	    for(i=0;i<n;i++)
	    {
	        if(i==0)
	        {
	            if((a[n-1] + a[1]) < d[0])
	            {
	                max=d[0];
	                j=i;

	            }
	        }
	        else if(i>0 && i<(n-1))
	        {
	            if((a[i-1] + a[i+1])<d[i])
	            {
	             if(max < d[i] )
	            {
	                max=d[i];
	                j=i;

	            }
                }
	        }
	        else
	        {
	            if((a[n-1]+a[0])<d[n-1] && max<d[n-1])
	            {
	                max=d[n-1];
	                j=i;

	            }
	        }
	    }
	    if(max==0)
	        printf("-1\n");
	   else
	        printf("%d\n",d[j]);
	}
	return 0;
}

