import math
t=int(input())
for i in range(0,t):
    n=int(input())
    if n==1:
        print(1)
        print(1,1)
    elif n==2:
        print(1)
        print(2,1,2)
    elif n==3:
        print(1)
        print(3,1,2,3)
    else:
        print(math.floor(n/2))
        if(n%2==1):
            print(3,1,2,n)
            for i in range(3,n-1,2):
                print(2,i,i+1)
        elif n%2==0:
            print(3,1,2,n-1)
            for i in range(3,n-2,2):
                print(2,i,i+1)
            print("1",n)
        
            
            
                      
            


