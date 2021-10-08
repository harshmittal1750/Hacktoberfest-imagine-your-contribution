n = int(input())
a = list(map(int,input().split()))
a.sort()
c = 1
r=-1
for i in a:
    if(i!=c): 
        r=c
        break
    c+=1
if r==-1:
    print(n)
else:
    print(r)