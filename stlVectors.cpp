#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>::iterator it;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<" "<<v[1]<<endl;
    vector<int> v1(5,100);//{100,100,100,100,100}
    vector<int> v2(v1);//v2=v1 here we are copying all the elements from v1 to v2
    for(it=v1.begin();it<v1.end();it++)
    {
        cout<<*it<<" ";
    }
    v1.push_back(10);
    cout<<endl;
    for(it=v1.begin();it<v1.end();it+=1)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    v1.insert(v1.begin(),300);
    v1.insert(v1.begin()+1,2,3);
    for(it=v1.begin();it<v1.end();it+=1)
    {
        cout<<*it<<" ";
    }
    //v.end() will point after 10
    //v.rend() will point before first 100
    //v.rebign will point at firts 100
    cout<<endl;
    cout<<v1.size()<<endl;
    v1.pop_back();//To remove last element
    for(it=v1.begin();it<v1.end();it+=1)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<v1.size()<<endl;
    v1.swap(v);
    for(it=v1.begin();it<v1.end();it+=1)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<v.empty()<<"\n";
    return 0;

}