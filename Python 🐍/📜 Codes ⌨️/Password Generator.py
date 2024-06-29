'''
Password Generator
-------------------------------------------------------------
'''


import secrets
import string

print("Password Generator")
def create_pw(pw_length=12):
   letters = string.ascii_letters
   digits = string.digits
   special_chars = string.punctuation

   alphabet = letters + digits + special_chars
   pwd = ''
   pw_strong = False

   while not pw_strong:
       pwd = ''
       for i in range(pw_length):
           pwd += ''.join(secrets.choice(alphabet))

       if (any(char in special_chars for char in pwd) and
               sum(char in digits for char in pwd) >= 2):
           pw_strong = True

   return pwd


if __name__ == '__main__':
   print("New Password: ")
   print(create_pw())
   print("Designed & Developed by Hemant")

"""
OUTPUT: 

Password Generator
New Password: 
br+p&m36wx5-
Designed & Developed by Hemant


** Process exited - Return Code: 0 **
Press Enter to exit terminal

"""