# This Calculator will give all results correctly except the three particular
# operations which shall show the following faulty results
# 45*3 = 555, 56+9=77, 56/6=4
while(True):
    var1 = int(input("Enter the First Operand\n"))
    var2 = int(input("Enter the Second Operand or exponent in case of power calculation\n"))
    operator=input("Enter the Type of Operation, Available Operations: + , - , * , / , ** , %\n")
    if (max(var1, var2) == 45 and min(var1, var2) == 3 and operator == "*"):
        print("Result:", "555")
    elif (max(var1, var2) == 56 and min(var1, var2) == 9 and operator == "+"):
        print("Result:", "77")
    elif (var1== 56 and var2 == 6 and operator == "/"):
        print("Result:", "4")
    else:
        if (operator == "+"):
            print("Result:", var1 + var2)
        elif (operator == "-"):
            print("Result:", var1 - var2)
        elif (operator == "*"):
            print("Result:", var1 * var2)
        elif (operator == "/"):
            print("Result:", var1 / var2)
        elif (operator=="**"):
            print("Result:", var1 ** var2)
        elif(operator=="%"):
            print("Result:", var1 % var2)
    if((input("Do you want to continue calculating? If yes type 'Y' else type 'N' \n")).capitalize()
            =='Y'):
        continue
    else:
        print("Thank You for using the Calculator")
        break