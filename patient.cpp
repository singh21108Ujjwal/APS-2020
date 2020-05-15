#include<iostream>
using namespace std;

class patient
{
public:
    string name;
    int uid;
    long int mobile;
    static int counter;
    patient()
    {
        name='\0';
        uid=0;
        mobile=0;

    }
    patient(string name1,int uid1,long int mobile1):name(name1),uid(uid1),mobile(mobile1)
    {
        cout<<"parametrized constructor"<<endl;
        counter++;
    }

    void display()
    {
        cout<<"Patient name:- "<<name<<" Id:- "<<uid<<" mobile:- "<<mobile<<endl;
    }
    int i=0;
    int key1(patient parray[2],long int mobile)
    {
        int flag=0;
        for(i=0;i<10;i++)
        {
            if(parray[i].mobile==mobile)
            {
              flag=1;
              break;
            }

        }
        return i;

    }
};

int patient::counter=0;

int main()
{
    patient parray[2];
    int i,key,j;
    for(i=0;i<2;i++)
    {
        cin>>parray[i].name>>parray[i].uid>>parray[i].mobile;
        patient(parray[i].name,parray[i].uid,parray[i].mobile);
        parray[i].display();
    }
    cout<<"Enter key for patient search"<<endl;
    cin>>key;
    patient p;
    j=p.key1(parray,key);
    cout<<"Patient record found at place"<<j<<" name is:- "<<parray[j].name<<endl;
    cout<<p.counter;
    return 0;


}
