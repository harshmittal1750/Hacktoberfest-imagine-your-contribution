# Python program to display the Fibonacci sequence

def fibo(n):
   if n <= 1:
       return n
   else:
       return(recur_fibo(n-1) + recur_fibo(n-2))


 print(fibo(9))     
