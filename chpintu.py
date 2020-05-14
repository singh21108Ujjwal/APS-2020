t=int(input())
for i in range(0,t):
    n,m=[int(x) for x in input().split()]
    f=[]
    p=[]
    f=[int(f) for f in input().split()]
    p=[int(p) for p in input().split()]
    c=set(f)
    s=list(c)
    k=[]
    for u in range(0,len(s)):
        sum=0
        for z in range(0,len(f)):
            if s[u] == f[z]:
                sum=sum+p[z]
        k.append(sum)
    print(min(k))
   # print(s[0])
