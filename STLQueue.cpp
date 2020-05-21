#include<bits/stdc++.h>
using namespace std;
void showElements(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main()
{
    queue<int> q;
    int i,j,n;
    cout<<"Enter no of elements in a queue:- ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
        q.push(j);
    }
    cout<<"Size of queue is "<<q.size()<<endl;
    cout<<"Front element of queue is "<<q.front()<<endl;
    cout<<"back element of queue is "<<q.back()<<endl;
    cout<<"Displaying top element:- ";
    cout<<q.front();
    cout<<"\nDisplaying all elements of queue\n";
    showElements(q);
    return 0;
}