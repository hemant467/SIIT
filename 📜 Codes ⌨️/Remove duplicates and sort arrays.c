#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to remove duplicates from an integer array
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int i = 0;
    int j;  // Declare j outside the for loop

    for (j = 0; j < numsSize; ++j) {
        if (i < 1 || nums[j] > nums[i - 1]) {
            nums[i++] = nums[j];
        }
    }

    return i;
}

// Function to remove duplicates from a character array
int removeDuplicateChars(char* chars, int charsSize) {
    if (charsSize == 0) return 0;

    int i = 0;
    int j;

    for (j = 0; j < charsSize; ++j) {
        int found = 0;
        int k;
        for (k = 0; k < i; ++k) {
            if (chars[k] == chars[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            chars[i++] = chars[j];
        }
    }

    return i;
}

// Comparison function for qsort (integer comparison)
int compareInts(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Comparison function for qsort (character comparison)
int compareChars(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

int main() {
    char input[100];
    int nums[100];
    char chars[100];
    int numsSize = 0;
    int charsSize = 0;

    printf("Enter a string: ");
    fgets(input, 100, stdin);
    input[strcspn(input, "\n")] = 0; // Remove the trailing newline character

    // Process each character in the input string
    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {
            nums[numsSize++] = input[i] - '0';
        } else if (isalpha(input[i])) {
            chars[charsSize++] = tolower(input[i]);
        }
    }

    // Remove duplicates
    numsSize = removeDuplicates(nums, numsSize);
    charsSize = removeDuplicateChars(chars, charsSize);

    // Sort the arrays
    qsort(nums, numsSize, sizeof(int), compareInts);
    qsort(chars, charsSize, sizeof(char), compareChars);

    printf("Array of integers after removing duplicates and sorting: ");
    for (int i = 0; i < numsSize; ++i) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("Array of characters after removing duplicates and sorting: ");
    for (int i = 0; i < charsSize; ++i) {
        printf("%c ", chars[i]);
    }
    printf("\n");

    return 0;
}
