'''
Fibonacci Sequence
-------------------------------------------------------------
'''

fib_cache = {}

def fib_memo(input_val):
   if input_val in fib_cache:
       return fib_cache[input_val]

   if input_val == 0:
       val = 0
   elif input_val < 2:
       val = 1
   else:
       val = fib_memo(input_val - 1) + fib_memo(input_val - 2)

   fib_cache[input_val] = val
   return val


if __name__ == '__main__':
   print('======== Fibonacci Series ========')
   print('**Designed & Developed by Hemant**')
   
   n = int(input('Enter the number of terms in the Fibonacci series: '))
   
   for i in range(1, n + 1):
       print(f'Fibonacci ({i}) : {fib_memo(i)}')


"""
OUTPUT: 

======== Fibonacci Series ========
**Designed & Developed by Hemant**
Enter the number of terms in the Fibonacci series: 
10
Fibonacci (1) : 1
Fibonacci (2) : 1
Fibonacci (3) : 2
Fibonacci (4) : 3
Fibonacci (5) : 5
Fibonacci (6) : 8
Fibonacci (7) : 13
Fibonacci (8) : 21
Fibonacci (9) : 34
Fibonacci (10) : 55


** Process exited - Return Code: 0 **
Press Enter to exit terminal

"""