
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,flag=0,flag1=0,t,s,n,flag2=1;
    cin>>t>>s;
    while(t--)
    {
        cin>>n;
        int count=0;
        int k=0;
        int a[n];
        int b[n];
        int c[n+n];
        flag2=0;
        k=0;
        flag=2;
        flag1=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
         for(i=0;i<n;i++)
        {
         if(a[i]<b[i])
            {
                count+=1;
            }
        }
        printf("Count %d\n",count);
        if(count!=n)
        {
            cout<<"NO\n";
        }
        else
        {
            for(i=0;i<(n-1);i++)
            {
                flag1=1;
                c[k]=a[i];
                c[k+1]=b[i];
                k=+2;
                for(j=0;j<k;j++)
                {

                    if(a[i+1]==c[j])
                    {
                        flag1=0;
                        printf("a=%d\t",a[i+1]);
                    }
                    //printf("\n");
                }
            }
            if(flag1==1)
            {
                cout<<"NO\n";
            }
            if(flag1==0)
            {
                cout<<"YES\n";
            }
        }

    }

}
