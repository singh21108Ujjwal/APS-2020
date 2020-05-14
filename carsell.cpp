#include<bits/stdc++.h>
using namespace std;

/* fast_mod() function is taken from stackoverflow 
URL:https://stackoverflow.com/questions/33333363/built-in-mod-vs-custom-mod-function-improve-the-performance-of-modulus-op*/
int fast_mod(long int input) {
    // apply the modulo operator only when needed
    // (i.e. when the input is greater than the ceiling)
    return input < 1000000007 ? input : input % 1000000007;
    // NB: the assumption here is that the numbers are positive
}
/* mod function is taken from stackoverflow 
URL:https://stackoverflow.com/questions/33333363/built-in-mod-vs-custom-mod-function-improve-the-performance-of-modulus-op*/
/*unsigned mod(long long int x, long long int y)
{
  return y & (y-1) ? x % y : x & (y-1);
}*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int i,j,t,n;
    unsigned long int sum=0;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        unsigned int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for(i=0;i<n;i++)
        {   
            sum+=a[i];
            //cout<<a[i]<<"\t";
            //flag=1;
            
            for(j=i+1;j<n;j++)
            {
                
                if(a[j]>0)
                    a[j]-=1;
                if(a[j]==0)
                {
                    n=j;
                    break;
                }
                    
                            
            }
        }
        //j=1000000007;
        cout<<fast_mod(sum)<<"\n";
        

    }
    return 0;
}