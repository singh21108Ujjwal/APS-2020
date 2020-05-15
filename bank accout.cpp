#include<bits/stdc++.h>
using namespace std;

class bankaccount
{
public:
    int acc;
    float accbal;
    bankaccount()
    {
        acc=0;
        accbal=0;
    }
    bankaccount(int acc1,float accbal1)
    {
        acc=acc1;
        accbal=accbal1;
    }
    void print()
    {
        cout<<"account no:- "<<acc<<endl<<"account balance:- "<<accbal<<endl;
    }
};

class customer
{
public:
    int custid;
    string custname;
    bankaccount ba1,ba2;

    customer()
    {
        custid=0;
        custname='\0';
    }
    customer(int custid1,string custname1,bankaccount ba)
    {
        custid=custid1;
        custname=custname1;
        ba1=ba;
    }

    void credit(float amt)
    {
        ba1.accbal=ba1.accbal+amt;
    }

    void debit(float amt)
    {
        ba1.accbal=ba1.accbal-amt;
    }

    void transfer(bankaccount *ba1,bankaccount *ba2,float amt)
    {
        ba1->accbal=ba1->accbal-amt;
        ba2->accbal=ba2->accbal+amt;
        cout<<"Transiction done"<<endl;
        ba1->print();
        ba2->print();
    }

    void printcust()
    {
        cout<<custid<< " "<<custname<<endl;
        ba1.print();
    }


};

int main()
{
    bankaccount ban[2];
    customer cu[2];
    cout<<"Enter bank account detail"<<endl;
    for(int i=0;i<2;i++)
    {
        cin>>ban[i].acc>>ban[i].accbal;
        bankaccount(ban[i].acc,ban[i].accbal);
    }
    cout<<"Enter customer detail"<<endl;
    for(int i=0;i<2;i++)
    {
        cin>>cu[i].custid>>cu[i].custname;
        customer(cu[i].custid,cu[i].custname,cu[i].ba1);
    }
    //bankaccount acc1(1001,4000),acc2(1002,4040);//
    ban[1].print();
    ban[0].print();
    //customer c1(1,"aaa",acc1),c2(2,"bbb",acc2);//
    /*c1.transfer(&acc1,&acc2,50);
    c1.printcust();
    c2.printcust();
    c1.credit(50);
    c1.printcust();*/

}

