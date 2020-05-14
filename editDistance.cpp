#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n;
    string str1,str2;
    cout<<"Enter First String:- ";
    cin>>str1;
    cout<<"Enter Second string:- ";
    cin>>str2;
    m=str1.length();
    n=str2.length();
    int dp[m][n];
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0 && j==0)
                dp[i][j]=0;
            else if(j==0)
            {
                dp[i][j]=dp[i-1][0]+1;
                cout<<dp[0][5]<<"#";
            }
            else if(i==0)
            {
                dp[i][j]=dp[0][j-1]+1;
                cout<<dp[0][5]<<" ";
            }
            
            else
            {
                if(str1[i-1]==str2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
                cout<<dp[0][5]<<" ";
            }
            
        }
    }
    cout<<"Matrix fromed is\n";
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            cout<<dp[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"Minimum no of edits required is "<<dp[m][n]<<endl;
    return 0;
}