#include<iostream>
using namespace std;

class point
{
public:
    int x,y;
    point()
    {
        x=0;
        y=0;
    }
    point(int a,int b):x(a),y(b)
    {

    }
    void print()
    {
        cout<<"x = "<<x<<" y = "<<y<<endl;

    }

};

int main()
{
    int a,b;
    cout<<"Enter the x and y "<<endl;
    cin>>a>>b;
    point p1(a,b),p2(a+10,b+10);
    p1.print();
    p2.print();
    return 0;
}
