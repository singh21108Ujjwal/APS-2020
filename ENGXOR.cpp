#include<bits/stdc++.h>
//using namespace std;

/*countSetBits code taken from geeksforgeeks.org
 https://www.geeksforgeeks.org/find-xor-of-two-number-without-using-xor-operator/ */

 unsigned int myXOR(unsigned int x,unsigned int y) 
{ 
   return (x | y) & (~x | ~y); 
} 

/* countSetBits and initialize taken from geeksforgeeks.org
https://www.geeksforgeeks.org/count-set-bits-in-an-integer/ */
unsigned int BitsSetTable256[256]; 
  
// Function to initialise the lookup table  
void initialize()  
{  
  
    // To initially generate the  
    // table algorithmically  
    BitsSetTable256[0] = 0;  
    for (int i = 0; i < 256; i++) 
    {  
        BitsSetTable256[i] = (i & 1) +  
        BitsSetTable256[i / 2];  
    }  
}  
  
// Function to return the count  
// of set bits in n  
unsigned int countSetBits(int n)  
{  
    return (BitsSetTable256[n & 0xff] +  
            BitsSetTable256[(n >> 8) & 0xff] +  
            BitsSetTable256[(n >> 16) & 0xff] +  
            BitsSetTable256[n >> 24]);  
}  

/* isEven code taken from geeksforgeeks.org
https://www.geeksforgeeks.org/3-ways-check-number-odd-even-without-using-modulus-operator-set-2-can-merge-httpswww-geeksforgeeks-orgcheck-whether-given-number-even-odd/ */

bool isEven(unsigned int n) 
{ 
    // n&1 is 1, then odd, else even 
    return (!(n & 1)); 
} 

int main()
{
    unsigned int i,j,k,t,n,q,p;
    scanf("%u",&t);
    while(t--)
    {
        scanf("%u%u",&n,&q);
        unsigned int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%u",&a[i]);
        }
        while(q--)
        {   
            initialize();
            unsigned int e=0;
            unsigned int od=0;
            scanf("%u",&p);
            for(i=0;i<n;i++)
            {
                j=myXOR(a[i],p);
                k=countSetBits(j);
                isEven(k) ? e++ : od++; 
                
            }
            printf("%u %u\n",e,od);
        }
    }
}