# cook your dish here
inpo=input()
inc = int(inpo)
key="not"
for i in range(0,inc):
    inp = input()
    words=inp.split()
    if key in words:
        print("Real Fancy")
    else:
        print("regularly fancy")
