'''
Countdown Timer
-------------------------------------------------------------
'''


import time

print('Countdown Timer')
def countdown(user_time):
   while user_time >= 0:
       mins, secs = divmod(user_time, 60)
       timer = '{:02d}:{:02d}'.format(mins, secs)
       print(timer, end='\r')
       time.sleep(1)
       user_time -= 1
   print('Time Out!')
   print("Designed & Developed by Hemant")


if __name__ == '__main__':
   user_time = int(input("Enter a time in seconds: "))
   countdown(user_time)

"""
OUTPUT: 

Countdown Timer
Enter a time in seconds: 
10
00:10
00:09
00:08
00:07
00:06
00:05
00:04
00:03
00:02
00:01
00:00
Time Out!
Designed & Developed by Hemant


** Process exited - Return Code: 0 **
Press Enter to exit terminal

"""