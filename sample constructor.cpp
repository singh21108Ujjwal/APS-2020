#include<bits/stdc++.h>
using namespace std;

class fraction
{
private:
    int num;
    int den;

public:
    fraction()
    {
    num=0;
    den=0;
    cout<<"in default"<<endl;
    }
    fraction(int a,int b)
    {
    num=a;
    den=b;
    cout<<"in default 2"<<endl;
    }

    void print(int a,int b)
    {
        cout<<a<<b;
    }
};

int main()
{
    int a,b;
    fraction f;
    cout<<"Enter two no."<<endl;
    cin>>a>>b;
    fraction(a,b);
    f.print(a,b);
    //fraction f(a,b);//
    return 0;
}
