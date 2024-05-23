#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Define the number of rows for each letter
#define ROWS 5

// Define the number of characters (letters + space)
#define NUM_CHARS 27

// Function to get the index of a character in the lookup table
int getCharIndex(char ch) {
    if (ch == ' ') return 26; // Space
    return tolower(ch) - 'a';
}

// Define the rows for each letter
const char* rows[NUM_CHARS][ROWS] = {
    {"  *  ", " * * ", "*****", "*   *", "*   *"}, // A
    {"**** ", "*   *", "**** ", "*   *", "**** "}, // B
    {" ****", "*    ", "*    ", "*    ", " ****"}, // C
    {"**** ", "*   *", "*   *", "*   *", "**** "}, // D
    {"*****", "*    ", "**** ", "*    ", "*****"}, // E
    {"*****", "*    ", "*****", "*    ", "*    "}, // F
    {"*****", "*    ", "*  **", "*   *", "*****"}, // G
    {"*   *", "*   *", "*****", "*   *", "*   *"}, // H
    {"*****", "  *  ", "  *  ", "  *  ", "*****"}, // I
    {"    *", "    *", "    *", "*   *", "*****"}, // J
    {"*   *", "*  * ", "***  ", "*  * ", "*   *"}, // K
    {"*    ", "*    ", "*    ", "*    ", "*****"}, // L
    {"*   *", "** **", "* * *", "*   *", "*   *"}, // M
    {"*   *", "**  *", "* * *", "*  **", "*   *"}, // N
    {"*****", "*   *", "*   *", "*   *", "*****"}, // O
    {"*****", "*   *", "*****", "*    ", "*    "}, // P
    {"*****", "*   *", "* * *", "*  **", "*****"}, // Q
    {"*****", "*   *", "*****", "*  * ", "*   *"}, // R
    {"*****", "*    ", "*****", "    *", "*****"}, // S
    {"*****", "  *  ", "  *  ", "  *  ", "  *  "}, // T
    {"*   *", "*   *", "*   *", "*   *", "*****"}, // U
    {"*   *", "*   *", "*   *", " * * ", "  *  "}, // V
    {"*   *", "*   *", "* * *", "* * *", "*   *"}, // W
    {"*   *", " * * ", "  *  ", " * * ", "*   *"}, // X
    {"*   *", " * * ", "  *  ", "  *  ", "  *  "}, // Y
    {"*****", "   * ", "  *  ", " *   ", "*****"}, // Z
    {"     ", "     ", "     ", "     ", "     "}  // Space
};

int main() {
    char input[100];
    int length, row, i;

    printf("Enter a word [in lowercase]: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    input[strcspn(input, "\n")] = '\0';

    length = strlen(input);

    // Print each row of the letters in sequence
    for (row = 0; row < ROWS; row++) {
        for (i = 0; i < length; i++) {
            int index = getCharIndex(input[i]);
            printf("%s ", rows[index][row]);
        }
        printf("\n");
    }
    printf("\n\n**************************\n(-: Designed by HEMANT :-)\n**************************\n");

    return 0;
}

