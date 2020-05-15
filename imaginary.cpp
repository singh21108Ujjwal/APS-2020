#include<iostream>
#include<cmath>
using namespace std;

class point
{
public:
    int x,y;
};
class rect
{
public:
    point tl;
    point br;
    int area()
    {
        return abs((tl.x-br.x)*(tl.y-br.y));
    }
    void print()
    {
        cout<<"area of rectangle is:- "<<area()<<endl;
    }
};

int main()
{
    rect a;
    cout<<"Enter the 4 values"<<endl;
    cin>>a.tl.x>>a.tl.y>>a.br.x>>a.br.y;
    a.print();
    return 0;
}
