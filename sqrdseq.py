t=int(input())
for k in range(0,t):
    n=int(input())
    oddC=0
    resC=0
    a=[int(a) for a in input().split()]
    for i in range(0,n):
        if (a[i]%2!=0):
            oddC+=1
        else:
            flag=0
            if a[i]%4 == 0:
                resC+=(n-i) + ((oddC*(oddC+1)/2)) + oddC*(n-i)
                oddC=0
            else:
                for j in range(i+1,n):
                    if a[j]%2==0:
                        m=j
                        flag=1
                        break
                if flag==0:
                    resC+=(n-j) + (oddC*(oddC+1)/2) + oddC*(n-j)
                elif flag==1:
                    resC+=(n-m) + (oddC*(oddC+1)/2) + oddC*(n-m)
                oddC=0
    resC+=(oddC*(oddC+1)/2)
    print(int(resC))

