import math
from collections import Counter
#function primeFactors() i taken from geeksforgeeks 
#URL: "https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/"
def primeFactors(n):
    a=[]
    while n%2==0:
        a.append(2)
        n=n/2
    for i in range(3,int(math.sqrt(n))+1,2):
        while n%i==0:
            a.append(i)
            n=n/i
    if n>2:
        a.append(n)
    return a

#function isprime() is taken from stackexchange
#URL:"https://stackoverflow.com/questions/1801391/how-to-create-the-most-compact-mapping-n-%E2%86%92-isprimen-up-to-a-limit-n"
def isprime(n):
    """Returns True if n is prime."""
    if n == 2:
        return True
    if n == 3:
        return True
    if n % 2 == 0:
        return False
    if n % 3 == 0:
        return False

    i = 5
    w = 2

    while i * i <= n:
        if n % i == 0:
            return False

        i += w
        w = 6 - w

    return True

t=int(input())
for i in range(0,t):
    x,k=[int(x) for x in input().split()]
    if x<=k:
        print("0")
    elif k==1:
        print("1")
    elif k==2:
        if isprime(x):
            print("0")
        else:
            print("1")

    else:
        c=primeFactors(x)
        #d=dict(Counter(c))
        l=len(c)
        #print(l)
        if k<=l:
            print("1")
        else:
            print("0")