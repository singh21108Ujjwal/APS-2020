#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,cou,flag=0,flag1=0,n,t,s,k;
    cin>>t>>s;
    while(t--)
    {
        k=0;
        cin>>n;
        int a[n];
        int b[n];
        int c[n+n];
        cou=0;
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
        if(s==1)
        {
            cou=0;
            for(i=0;i<n;i++)
            {
                if(a[i]<b[i])
                    cou+=1;
            }
            flag1=0;
            //cout<<cou<<endl;
            if(cou!=n)
            {
                cout<<"NO\n";
            }

            else if(cou==n)
            {

                for(i=0;i<(n-1);i++)
                {
                    if(flag1==1)
                        break;
                    c[k]=a[i];
                    c[k+1]=b[i];
                    //cout<<a[i]<<" "<<b[i];
                    k+=2;
                    flag=1;
                    /*for(int m=0;m<k;m++)
                    {
                        cout<<c[m]<<" ";
                    }
                    printf("\n");*/
                    for(j=0;j<k;j++)
                    {
                        if(a[i+1]==c[j])
                        {
                            flag=0;
                        }
                    }
                    if(flag==1)
                        flag1=1;

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
        if(s==2)
            printf("NO\n");
    }
}
