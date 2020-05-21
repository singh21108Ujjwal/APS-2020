#include<bits/stdc++.h>
using namespace std;
void showElements(stack <int> s)
{
    while(!(s.empty()))
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int> s;
    int i,j,n;
    cout<<"Enter no of elements to push in stack:-";
    cin>>n;
    cout<<"Enter elemts for stack\n";
    for(i=0;i<n;i++)
    {
        cin>>j;
        s.push(j);
    }
    cout<<"Size of stack is "<<s.size()<<endl;
    cout<<"Displaying top element:- ";
    cout<<s.top();
    cout<<"\nDisplaying all elements of stack\n";
    showElements(s);
    return 0;
}
