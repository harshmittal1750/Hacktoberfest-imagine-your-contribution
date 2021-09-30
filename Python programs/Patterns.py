"""for i in range(1,4):   #to print no. of lines
    for j in range(1,4):  #to print characters
        print(i,end='')
    print()"""



"""for i in range(1,4):
    for j in range(1,i+1):
        print("*",end='')
    print()"""



"""for i in range(1,4):
    for j in range(1,i+1):
        print(j,end='')
    print()"""



for i in range(1,4):
    for s in range(1,117-i):
        print(end=' ')
    for j in range(1,i+1):
        print("*",end=' ')
    print()
