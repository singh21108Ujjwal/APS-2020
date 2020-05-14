#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i;
    cin>>a;
    for(i=0;i<a.length();i++)
    {
      int flag=0;
      if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || 
      a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'y' || a[i] == 'Y')
      {
          flag=1;
      }
      if(flag==0)
      {    
        if(a[i]>=65 && a[i]<=92)
        {
          a[i]=a[i]+32;
          cout<<"."<<a[i];
        }
        else
        {
          cout<<"."<<a[i];
        }
        
      }

    }
    cout<<"\n";
    return 0;
}