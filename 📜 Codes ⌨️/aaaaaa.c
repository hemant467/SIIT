#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to remove duplicates from a string
int removeDuplicateChars(char* str, int size) {
    if (size == 0) return 0;

    int i = 0;
    int j;

    for (j = 0; j < size; ++j) {
        int found = 0;
        int k;
        for (k = 0; k < i; ++k) {
            if (str[k] == str[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            str[i++] = str[j];
        }
    }

    return i;
}

// Comparison function for qsort (character comparison)
int compareChars(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    char input[100];
    char integers[100];
    char characters[100];
    int intSize = 0;
    int charSize = 0;
    int i; // Declare i here for compatibility with C89

    printf("Enter a string: ");
    fgets(input, 100, stdin);

    // Tokenize the input string and separate into integers and characters
    char *token = strtok(input, " ");
    while (token != NULL) {
        if (isdigit(token[0])) {
            strcat(integers, token);
            intSize += strlen(token);
        } else if (isalpha(token[0])) {
            strcat(characters, token);
            charSize += strlen(token);
        }
        token = strtok(NULL, " ");
    }

    // Remove duplicates
    intSize = removeDuplicateChars(integers, intSize);
    charSize = removeDuplicateChars(characters, charSize);

    // Sort the arrays
    qsort(integers, intSize, sizeof(char), compareChars);
    qsort(characters, charSize, sizeof(char), compareChars);

    printf("Array of integers after removing duplicates and sorting: %s\n", integers);
    printf("Array of characters after removing duplicates and sorting: %s\n", characters);

    return 0;
}
