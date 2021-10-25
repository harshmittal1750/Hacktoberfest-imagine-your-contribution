for i in range(int(input())):
    y,x = map(int, input().split())
    z = max(y,x)
    if (z%2==0):
        if z==y:
            res = z*z + 1 - x
        else:
            x-=1
            res = x*x + y
    else:
        if z==x:
            res = z*z + 1 - y
        else:
            y-=1
            res = y*y + x
    print(res)
