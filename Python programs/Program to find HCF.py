def hcf(x,y):
    if x>y:
        smaller = y 
    else:
        smaller = x 
    for i in range(1,smaller+1):
        if x%i==0 and y%i==0:
            hcf=i 
    return hcf
number1 = int(input("Enter 1st No:"))
number2 = int(input("Enter 2nd No :"))
print("The HCF is :",hcf(number1,number2))
