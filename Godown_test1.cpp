#include<bits/stdc++.h>
using namespace std;

class Good
{
   public:
    int type;
    int nop;
    Good(int ttype,int packets)
    {
        type=ttype;
        nop=packets;
    }
    void print()
    {
        cout<<nop<<" packets are of Type"<<type<<endl;
    }
};

class Godown
{
public:
    string name;
    bool os;
    int tp;
    int capacity;
    Good goods;

    static int counter;
    int capacity1;

    Godown(string nname,bool a,int ccapacity,int b,Good c)
    {
        name=nname;
        capacity=ccapacity;
        os=a;
        tp=b;
        goods=c;
    }

    void ass()
    {
        capacity1=capacity;
        cout<<capacity1<<" in ass \n";
    }
        //cout<<capacity1;
    //capacity1=capacity;

    bool AddGoods(int ttype1,int nops,Good p[])
    {
        for(int i=0;i<3;i++)
        {


        if(p[i].type==1 && (p[i].nop+nops)<capacity)
            p[i].nop+=nops;
        else if(p[i].type==2 && (p[i].nop+nops)<capacity )
            p[i].nop+=nops;
        else if(goods->type==3 && (p[i].nop+nops)<capacity)
           p[i].nop+=nops;
        capacity1-=nops;
        cout<<nops<<" added in Type "<<p[i].type<<" Updated quantity is "<<p[i].nop<<endl;
        cout<<capacity1<<endl;
        if(capacity1<capacity)
            return true;
        if(capacity1==100)
            return false ;
        }
    }
};
int Godown::counter=0;

int main()
{
    Good g1(1,10),g2(2,10),g3(3,10);
    Good g[3]={g1,g2,g3};
    Godown g("abc",0,100,0,g1);
    int x;
    g1.print();
    g2.print();
    g3.print();
    g.ass();
    x=g.AddGoods(1,20,g);
    cout<<x<<endl;
    g1.print();
    return 0;
}
