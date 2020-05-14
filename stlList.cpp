#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls;
    ls.push_back(2);
    //list offers push_front option alsp which is not in vector
    ls.push_front(10);
    list<int>::iterator it;
    for(it=ls.begin();it<ls.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //rest of the list function are same as vectors
    return 0;
}