#include <bits/stdc++.h>
using namespace std;

#define max(a,b) (a>b?a:b)

int min_num_drops(int num_floors, int num_eggs)
{
  int min_throws[num_floors+1][num_eggs+1];
  int f, e, i;
  if (num_eggs == 1)
    return num_floors;
  
  for(i=0; i<num_floors+1; i++){
    min_throws[i][1] = i;
    min_throws[i][0] = 0;
    }
    
  for(i=0; i<num_eggs+1; i++)
  {
    min_throws[0][i] = 0;
    min_throws[1][i] = 1;
  }
  
  for(e=2; e<=num_eggs; e++)
  {
    for(f=2; f<=num_floors; f++)
    {
      min_throws[f][e] = INT_MAX;
      for(i=1; i<=f; i++)
      {
        int drops = 1 + max(min_throws[i-1][e-1], min_throws[f-i][e]);
        if(drops < min_throws[f][e])
          min_throws[f][e] = drops;
      }
    }
  }
  
  return min_throws[num_floors][num_eggs];
}

int main()
{
  int num_floors, num_eggs;
  cout << "Enter number of floors: ";
  cin >> num_floors;
  cout << "Enter number of eggs: ";
  cin >> num_eggs;
  cout << "minimum number of drops: " << min_num_drops(num_floors, num_eggs) << endl;
}