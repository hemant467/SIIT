					PYTHON

print("Hemant")
a=input(" ")
b=input(" ")
c=a+b #CONCAT
print(c)

""" => Comments
This is
a string
input

Comments for multiple lines

Output :
Hemant
 Hem
 ant
Hemant
""" 

-----------------------------------------------------------------------------

a='j'
x='john'
print(type(x))
print(type(a))

print(x)
print(a)

""" => Comments
Output :
<class 'str'>
<class 'str'>
john
j
""" 

-----------------------------------------------------------------------------

Naming Conventions :
1. Numbers are not used as starting
2. '-' is not used
3. Space is not used


Ex:

myvar=5
MYVAR=6
myVar=7
Myvar=8
my_Var=9
_my_Var=10
my2Var=11
print(myvar)
print(MYVAR)
print(myVar)
print(Myvar)
print(my_Var)
print(_my_Var)
print(my2Var)

""" => Comments
Output :
5
6
7
8
9
10
11
""" 

-----------------------------------------------------------------------------

x=y=z="Orange"
print(x)
print(y)
print(z)

""" => Comments
Output :
Orange
Orange
Orange
""" 

-----------------------------------------------------------------------------

"""Unpacked List"""
fruits=['Apple','Banana','Dragon Fruit']
x,y,z=fruits
print(x)
print(y)
print(z)

""" => Comments
Output :
Apple
Banana
Dragon Fruit
""" 

-----------------------------------------------------------------------------

"""Sum of n-numbers using PYTHON"""
print("Sum of n-Natural numbers")
n=int(input("Sum of n numbers upto: "))
sum=(n*(n+1))//2
print("Sum of natural numbers from 1 to ",n,"is: ",sum)

""" => Comments
Output :
Sum of n-Natural numbers
Sum of n numbers upto: 100
Sum of natural numbers from 1 to  100 is:  5050
""" 

-----------------------------------------------------------------------------

"""To check the given number is EVEN/ODD using PYTHON"""
print("To check the given number is EVEN/ODD")
n=int(input("Enter a number: "))
if n%2==0:
    print(n,"is an EVEN number.")
else:
        print(n,"is an ODD number.")
""" => Comments
Output :

To check the given number is EVEN/ODD
Enter a number: 10
10 is an EVEN number.

To check the given number is EVEN/ODD
Enter a number: 11
11 is an ODD number.
""" 

-----------------------------------------------------------------------------
