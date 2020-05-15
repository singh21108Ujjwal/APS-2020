#include<bits/stdc++.h>
using namespace std;

class Bird
{
public:
    string color;

    Bird(string col)
    {
        color=col;
    }
    void fly()
    {


    }
    void run()
    {

    }
};
class flyBird:public Bird
{
public:
    float altitude;
    int alt;
    flyBird(string col):Bird(col)
    {

    }
    void fly()
    {
       alt=alt+5;
       if(alt>=100)
            alt=100;
    }
};
class myna:public flyBird
{
public:
    void fly()
    {
       alt=alt+7;
       if(alt>1000)
            alt=200;
    }
};
class noFlyBird:public Bird
{
public:
 float speed;
 noFlyBird(string col):Bird(col);
 void run()
 {
    speed+=7;
    if(speed>100)
        speed=50;
 }
};
class penguiene:public noFlyBird
{
public:
    void run()
    {
    speed+=10;
    if(speed>100)
        speed=90;
    }
};

int main()
{
    myna myna1=(100,"purple"),myna2=(200,"Black")};

    for(int j=0;j<10;j++)
    {
        myna1.fly;
        cout<<j<<"th second altitude\n";
        cout<<"Myna1="<<myna1.fly
    }
    return 0;
}
