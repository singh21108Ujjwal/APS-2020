import math
from collections import Counter
#function primeFactors() i taken from geeksforgeeks 
#URL: "https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/"
def primeFactors(n):
    a=set([])
    while n%2==0:
        a.add(2)
        n=n/2
    for i in range(3,int(math.sqrt(n))+1,2):
        while n%i==0:
            a.add(i)
            n=n/i
    if n>2:
        a.add(n)
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
    c=[]
    n=int(input())
    b=[]
    for j in range(1,n+1):
        b.append(j)
    #print(b)
    for j in range(0,len(b)):
        if isprime(b[j]) and b[j]!=0:
            c.append(b[j])
            b[j]=0
    c.append(0)
    b=list(filter((0).__ne__, b))
    #print(b)
    for j in range(0,len(b)):
        if b[j]!=0:
            flag=0
            for k in range(j+1,len(b)):
                if b[k]!=0:
                    set1=primeFactors(b[j]).intersection(primeFactors(b[k]))
                    #print(len(set1))
                    if(len(set1)==0):
                        #c.append(b[j])
                        c.append(b[k])
                        #b[j]=0
                        b[k]=0
                        flag=1
            
            c.append(b[j])
            b[j]=0
            c.append(0)
            #print(c)
            #print(b)
            count=0
    for u in range(0,len(c)):
        if c[u]==0:
            count+=1
    print(count)
    count=0
    flag1=0
    print(c)
    for u in range(0,len(c)):
        if flag1==0:
            flag1=1
            count=0
            if(c[u]!=0):
                count+=1
            if(c[u]==0):
                print(count,end=" ")
            for j in range(0,u):
                print(c[u-j-1],end=" ")
            print("\n")
        if(flag1==1):
            count=0
            u+=1
            if(c[u]!=0):
                count+=1
            if(c[u]==0):
                print(count,end=" ")
            for j in range(0,u):
                print(c[u-j-1],end=" ")
            print("\n")
    

        

    
    #print(c)
    #print(b)
