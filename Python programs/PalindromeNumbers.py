def solve(n):
        rev=n[::-1]
        print(rev)
        if n==rev:
            return "YES"
        else:
            return "NO"
n=input("Enter Number ")
print(solve(n))

