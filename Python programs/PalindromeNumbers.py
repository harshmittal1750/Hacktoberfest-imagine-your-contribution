try:
    def solve(n):
        rev=n[::-1]
        print(rev)
        if n==rev:
            return "YES"
        else:
            return "NO"
    if __name__=="__main__":
        n=input("Enter Number ")
        print(solve(n))
except:
    pass
