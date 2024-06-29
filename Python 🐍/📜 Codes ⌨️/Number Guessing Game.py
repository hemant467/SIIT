'''
Number Guessing Game
-------------------------------------------------------------
'''

import random


def show_score(attempts_list):
    if not attempts_list:
        print('There is currently no best score,'
              ' it\'s yours for the taking!')

    else:
        print(f'The current best score is'
              f' {min(attempts_list)} attempts')


def start_game():
    attempts = 0
    rand_num = random.randint(1, 10)
    attempts_list = []

    print('Hello player! Welcome to the game of guesses!')
    player_name = input('What is your name? ')
    wanna_play = input(
        f'Hi, {player_name}, would you like to play '
        f'the guessing game? (Enter Yes/No): ')

    if wanna_play.lower() != 'yes':
        print('That\'s cool, Thanks!')
        exit()
    else:
        show_score(attempts_list)

    while wanna_play.lower() == 'yes':
        try:
            guess = int(input('Pick a number between 1 and 10: '))
            if guess < 1 or guess > 10:
                raise ValueError(
                    'Please guess a number within the given range')

            attempts += 1

            if guess == rand_num:
                attempts_list.append(attempts)
                print('Cool! You got it!')
                print(f'It took you {attempts} attempts')
                wanna_play = input(
                    'Would you like to play again? (Enter Yes/No): ')
                if wanna_play.lower() != 'yes':
                    print('Thank you for playing the game!!!')
                    print('Designed & Developed by Hemant :)')
                    break
                else:
                    attempts = 0
                    rand_num = random.randint(1, 10)
                    show_score(attempts_list)
                    continue
            else:
                if guess > rand_num:
                    print('It\'s lower')
                elif guess < rand_num:
                    print('It\'s higher')

        except ValueError as err:
            print('Oh no!, that is not a valid value. Try again...')
            print(err)


if __name__ == '__main__':
    start_game()

"""
OUTPUT: 

Hello player! Welcome to the game of guesses!
What is your name? 
Hemant
Hi, Hemant, would you like to play the guessing game? (Enter Yes/No): 
yes
There is currently no best score, it's yours for the taking!
Pick a number between 1 and 10: 
1
It's higher
Pick a number between 1 and 10: 
2
It's higher
Pick a number between 1 and 10: 
5
It's higher
Pick a number between 1 and 10: 
3
It's higher
Pick a number between 1 and 10: 
4
It's higher
Pick a number between 1 and 10: 
6
It's higher
Pick a number between 1 and 10: 
7
Cool! You got it!
It took you 7 attempts
Would you like to play again? (Enter Yes/No): 
no
Thank you for playing the game!!!
Designed & Developed by Hemant :)


** Process exited - Return Code: 0 **
Press Enter to exit terminal
"""