#include<bits/stdc++.h>
using namespace std;

int main()
{
    string m;
    string n;
    int i,j,t,u;
    cout<<"Enter the string for match: ";
    cin>>n;
    cout<<"Enter the string to match: ";
    cin>>m;
    t=n.length();
    u=m.length();
    int lcs[u][t];
    for(i=0;i<=u;i++)
    {
        lcs[i][0]=0;
    }
    for(i=0;i<=t;i++)
    {
        lcs[0][i]=0;
    }
    for(i=1;i<=u;i++)
    {
        for(j=1;j<=t;j++)
        {
            if(m[i-1]==n[j-1])
                lcs[i][j]=1+lcs[i-1][j-1];
            else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    }

    cout<<"########Matrix formed is############\n";
    for(i=0;i<=u;i++)
    {
        for(j=0;j<=t;j++)
        {
            cout<<lcs[i][j]<<"\t";
        }
        printf("\n");
    }
    cout<<"Length of Longest sommon subsequence is "<<lcs[u][t]<<endl;
    cout<<"Longest common subsequence is :- ";
    for(i=1;i<=u;i++)
    {
        for(j=2;j<=t;j++)
        {
            if(lcs[i][j]!=lcs[i][j-1])
                cout<<m[i+1];
        }
        
    }
    cout<<"\n";

}