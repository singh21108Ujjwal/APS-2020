#include<bits/stdc++.h>
using namespace std;
bool prime(int n) {
    
    if (n == 1) {
        return false;
    }

    int i = 2;
    // This will loop from 2 to int(sqrt(x))
    while (i*i <= n) {
        // Check if i divides x without leaving a remainder
        if (n % i == 0) {
            // This means that n has a factor in between 2 and sqrt(n)
            // So it is not a prime number
            return false;
        }
        i += 1;
    }
    // If we did not find any factor in the above loop,
    // then n is a prime number
    return true;
}
int primefactors(unsigned long  int n)
{   
    std::vector<unsigned long int> my_vec;
    vector<unsigned long int>::iterator ip; 
    int count=0;
    
    while (n % 2 == 0)  
    {  
        my_vec.push_back(2);
        //cout << 2 << " ";  
        n = n/2;  
    }  
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, print i and divide n  
        while (n % i == 0)  
        {  
            my_vec.push_back(i);  
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  
        my_vec.push_back(n); 

    // Using std::unique 
    //ip = std::unique(my_vec.begin(), my_vec.begin() + my_vec.size());
    //my_vec.resize(std::distance(my_vec.begin(), ip)); 
    return my_vec.size(); 
}

int main()
{
    int a=primefactors(8);
    cout<<a<<"\t";
    if(prime(6))
        cout<<"0\n";
    else
    {
        cout<<"1";
    }
    
    //cout<<a;
}
