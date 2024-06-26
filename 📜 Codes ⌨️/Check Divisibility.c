//Check Divisibility
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    int i;
    for (i = 2; i*i<= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void checkDivisibility(int num)
{
    int i; // Declare the variable outside the loop
    for (i = 2; i <= num; i++)
        if (isPrime(i) && num % i == 0)
            printf("Divisible by %d\n", i);
    printf("\n");
}

void clearInputBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    int num;
    char choice;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        checkDivisibility(num);

        printf("\nDo you want to check another number? (y/n): ");
        clearInputBuffer();
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for running the code :) \n");
}
