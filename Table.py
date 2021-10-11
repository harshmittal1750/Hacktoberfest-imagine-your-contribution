n=int(input("Enter the number you want the table for "))
print("**** Table of {} ****\n".format(n))
for i in range(1,11):
    b=n*i
    print("{} * {} = {}".format(n,i,b))
