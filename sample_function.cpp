#include<iostream>
#include<math.h>

using namespace std;

class complex
{
public:
    double re,im;
    double norm()
    {
        return sqrt((re*re)+(im*im));
    }
    void print();
};

void complex::print()
{
    cout<<"norm is "<<c.norm()<<endl;
}

int main()
{
    complex c={3.2,4.5};
    c.print();
    return 0;
}
