#include<bits/stdc++.h>
using namespace std;
int BIT[1000];
int a[1000];
int n=5;

void update(int i,int value)
 {  
     
     for(;i<=n;i+=(i & -i))
     {
         BIT[i]+=value;
     }

 }

int query(int i)
 {
     int query_sum=0;
     for(;i>0;i= i-(i & -i))
     {
         query_sum+=BIT[i];
     }
     return query_sum;
 }

 int main()
 {
     update(1,2);
     update(2,3);
     update(3,4);
     cout << query(2) << endl;
     //return 0;
 }