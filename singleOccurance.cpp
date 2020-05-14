#include<bits/stdc++.h>
using namespace std;

void findAlone( )
{
    int a[]={1,1,2,2,3,4,4};
    int result=0;
    for(int i=0;i<7;i++)
    {
        result^=a[i];
    }
    cout<<result;
}

int main()
{

    findAlone();
    return 0;
}