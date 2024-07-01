import random

# Generate a random 4-digit number
num = random.randrange(1000, 10000)

# Initialize variables
max_attempts = 5  # Maximum number of attempts allowed
attempt = 0        # Current attempt counter

# Get player's name
player_name = input("Enter your name: ")

print(f'\nHello {player_name}! Welcome to the game of guesses!')

# Loop for user input and checking
while attempt < max_attempts:
    attempt += 1
    n = int(input(f"\nAttempt {attempt}/{max_attempts}: Guess the 4 digit number: "))

    # Check if the guess matches the generated number
    if n == num:
        print(f"\nCongratulations {player_name}! You guessed the number {num} correctly in {attempt} attempts.")
        print('\nThank you for playing the game!!!')
        print('\nDesigned & Developed by Hemant :)')
        break
    else:
        # Provide feedback based on the comparison of digits
        count = 0
        for i in range(4):
            if str(n)[i] == str(num)[i]:
                count += 1
        
        print(f"Attempt {attempt}: You got {count} digit(s) correct.")

# If the user runs out of attempts without guessing correctly
if attempt == max_attempts:
    print(f"\nSorry {player_name}, you've run out of attempts. The correct number was {num}. Try again!")
    print('\nThank you for playing the game!!!')
    print('\nDesigned & Developed by Hemant :)')

"""
OUTPUT:

Enter your name: 
Rahul

Hello Rahul! Welcome to the game of guesses!

Attempt 1/5: Guess the 4 digit number: 
1234
Attempt 1: You got 0 digit(s) correct.

Attempt 2/5: Guess the 4 digit number: 
5678
Attempt 2: You got 0 digit(s) correct.

Attempt 3/5: Guess the 4 digit number: 
9999
Attempt 3: You got 2 digit(s) correct.

Attempt 4/5: Guess the 4 digit number: 
9889
Attempt 4: You got 1 digit(s) correct.

Attempt 5/5: Guess the 4 digit number: 
9979
Attempt 5: You got 1 digit(s) correct.

Sorry Rahul, you've run out of attempts. The correct number was 9195. Try again!

Thank you for playing the game!!!

Designed & Developed by Hemant :)

"""