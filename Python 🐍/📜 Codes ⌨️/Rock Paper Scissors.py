'''
Rock Paper Scissors
-------------------------------------------------------------
'''

import random
import os
import re


def check_play_status():
  valid_responses = ['yes', 'no', 'y']
  while True:
      try:
          response = input('Do you wish to play again? (Yes or No): ')
          if response.lower() not in valid_responses:
              raise ValueError('Yes or No only')

          if response.lower() == 'yes':
              return True
          elif response.lower() =='y':
              return True
          else:
              os.system('cls' if os.name == 'nt' else 'clear')
              print(f'Thanks for playing!')
              print(f'Final Score - You: {user_score}, Computer: {computer_score}')
              exit()

      except ValueError as err:
          print(err)


def play_rps():
    user_score = 0
    computer_score = 0
    play = True

    while play:
       os.system('cls' if os.name == 'nt' else 'clear')
       print('')
       print(f'Rock, Paper, Scissors - Shoot!')
       print('Designed & Developed by Hemant :)')

       user_choice = input('Choose your weapon'
                           ' [R]ock, [P]aper, or [S]cissors: ')

       if not re.match("[SsRrPp]", user_choice):
           print('Please choose a letter:')
           print('[R]ock, [P]aper, or [S]cissors')
           continue

       print(f'You chose: {user_choice}')

       choices = ['R', 'P', 'S']
       opp_choice = random.choice(choices)

       print(f'I chose: {opp_choice}')

       if opp_choice == user_choice.upper():
           print('Tie!')
           print('Score')
           print(f'Your Score : {user_score}, Computer Score: {computer_score}')
           play = check_play_status()
       elif opp_choice == 'R' and user_choice.upper() == 'S':
           print('Rock beats scissors, I win!')
           computer_score += 1
           print(f'Score - You: {user_score}, Computer: {computer_score}')
           play = check_play_status()
       elif opp_choice == 'S' and user_choice.upper() == 'P':
           print('Scissors beats paper! I win!')
           computer_score += 1
           print(f'Score - You: {user_score}, Computer: {computer_score}')
           play = check_play_status()
       elif opp_choice == 'P' and user_choice.upper() == 'R':
           print('Paper beats rock, I win!')
           computer_score +=1
           print(f'Score - You: {user_score}, Computer: {computer_score}')
           play = check_play_status()
       else:
           print('You win!\n')
           user_score += 1
           print(f'Score - You: {user_score}, Computer: {computer_score}')
           play = check_play_status()

if __name__ == '__main__':
   play_rps()

"""
OUTPUT: 

Rock, Paper, Scissors - Shoot!
Designed & Developed by Hemant :)
Choose your weapon [R]ock, [P]aper, or [S]cissors: 
r
You chose: r
I chose: R
Tie!
Score
Your Score : 0, Computer Score: 0
Do you wish to play again? (Yes or No): ** Process Stopped **

Press Enter to exit terminal

"""