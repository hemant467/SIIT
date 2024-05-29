//Character type handling function
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0') {
        // Check if character is alphabetical
        if (isalpha(str[i])) {
            printf("%c is alphabetical\n", str[i]);
        }

        // Check if character is a digit
        if (isdigit(str[i])) {
            printf("%c is a digit\n", str[i]);
        }

        // Check if character is alphanumeric
        if (isalnum(str[i])) {
            printf("%c is alphanumeric\n", str[i]);
        }

        // Check if character is lowercase
        if (islower(str[i])) {
            printf("%c is lowercase\n", str[i]);
        }

        // Check if character is uppercase
        if (isupper(str[i])) {
            printf("%c is uppercase\n", str[i]);
        }

        // Convert character to lowercase
        printf("Lowercase of %c is %c\n", str[i], tolower(str[i]));

        // Convert character to uppercase
        printf("Uppercase of %c is %c\n\n", str[i], toupper(str[i]));

        // Check if character is a punctuation character
        if (ispunct(str[i])) {
            printf("%c is a punctuation character\n\n", str[i]);
        }

        ++i;
    }

    return 0;
}
