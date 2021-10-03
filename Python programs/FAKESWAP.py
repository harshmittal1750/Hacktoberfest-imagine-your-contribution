# The link to the problem is : https://www.codechef.com/COOK133C/problems/FAKESWAP
# Below is my solution
for i in range(int(input())):
    a=int(input())
    b=input()
    c=input()
    d=e=0
    if b==c:
        print("YES")
    else:
        for i in range(a):
            if c[i]=='1':
                d+=1
            else:
                e+=1
        if d>0 and e>0:
            print("YES")
        else:
            print("NO")
