#include<iostream>
#include<cmath>
using namespace std;

class complex
{
public:
    double re,im;
    double norm()
    {
        return sqrt((re*re)+(im*im));
    }
    void print()
    {
        cout<<re<<"i+"<<im<<endl;
        cout<<"norm is "<< norm()<<endl;
    }
};

int main()
{
    complex c;
    cout<<"Enter the real and imaginary part"<<endl;
    cin>>c.re>>c.im;
    c.print();
    return 0;
}
