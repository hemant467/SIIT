#include <stdio.h>
#include <string.h>

// Function prototypes for getting rows of each letter
const char* getRowA(int row);
const char* getRowB(int row);
const char* getRowC(int row);
const char* getRowD(int row);
const char* getRowE(int row);
const char* getRowF(int row);
const char* getRowG(int row);
const char* getRowH(int row);
const char* getRowI(int row);
const char* getRowJ(int row);
const char* getRowK(int row);
const char* getRowL(int row);
const char* getRowM(int row);
const char* getRowN(int row);
const char* getRowO(int row);
const char* getRowP(int row);
const char* getRowQ(int row);
const char* getRowR(int row);
const char* getRowS(int row);
const char* getRowT(int row);
const char* getRowU(int row);
const char* getRowV(int row);
const char* getRowW(int row);
const char* getRowX(int row);
const char* getRowY(int row);
const char* getRowZ(int row);

// Functions to return specific rows of each letter
const char* getRowA(int row) {
    switch (row) {
        case 0: return "  *  ";
        case 1: return " * * ";
        case 2: return "*****";
        case 3: return "*   *";
        case 4: return "*   *";
        default: return "     ";
    }
}

const char* getRowB(int row) {
    switch (row) {
        case 0: return "**** ";
        case 1: return "*   *";
        case 2: return "**** ";
        case 3: return "*   *";
        case 4: return "**** ";
        default: return "     ";
    }
}

const char* getRowC(int row) {
    switch (row) {
        case 0: return " ****";
        case 1: return "*    ";
        case 2: return "*    ";
        case 3: return "*    ";
        case 4: return " ****";
        default: return "     ";
    }
}

const char* getRowD(int row) {
    switch (row) {
        case 0: return "**** ";
        case 1: return "*   *";
        case 2: return "*   *";
        case 3: return "*   *";
        case 4: return "**** ";
        default: return "     ";
    }
}

const char* getRowE(int row) {
    switch (row) {
        case 0: return "*****";
        case 1: return "*    ";
        case 2: return "**** ";
        case 3: return "*    ";
        case 4: return "*****";
        default: return "     ";
    }
}

const char* getRowF(int row) {
    switch (row) {
        case 0: return "*****";
        case 1: return "*    ";
        case 2: return "*****";
        case 3: return "*    ";
        case 4: return "*    ";
        default: return "     ";
    }
}

const char* getRowG(int row) {
    switch (row) {
        case 0: return "*****";
        case 1: return "*    ";
        case 2: return "*  **";
        case 3: return "*   *";
        case 4: return "*****";
        default: return "     ";
    }
}

const char* getRowH(int row) {
    switch (row) {
        case 0: return "*   *";
        case 1: return "*   *";
        case 2: return "*****";
        case 3: return "*   *";
        case 4: return "*   *";
        default: return "     ";
    }
}

const char* getRowI(int row) {
    switch (row) {
        case 0: return "*****";
        case 1: return "  *  ";
        case 2: return "  *  ";
        case 3: return "  *  ";
        case 4: return "*****";
        default: return "     ";
    }
}

const char* getRowJ(int row) {
    switch (row) {
        case 0: return "    *";
        case 1: return "    *";
        case 2: return "    *";
        case 3: return "*   *";
        case 4: return "**** ";
        default: return "     ";
    }
}

const char* getRowK(int row) {
    switch (row) {
        case 0: return "*   *";
        case 1: return "*  * ";
        case 2: return "***  ";
        case 3: return "*  * ";
        case 4: return "*   *";
        default: return "     ";
    }
}

const char* getRowL(int row) {
    switch (row) {
        case 0: return "*    ";
        case 1: return "*    ";
        case 2: return "*    ";
        case 3: return "*    ";
        case 4: return "*****";
        default: return "     ";
    }
}

const char* getRowM(int row) {
    switch (row) {
        case 0: return "*   *";
        case 1: return "** **";
        case 2: return "* * *";
        case 3: return "*   *";
        case 4: return "*   *";
        default: return "     ";
    }
}

const char* getRowN(int row) {
    switch (row) {
        case 0: return "*   *";
        case 1: return "**  *";
        case 2: return "* * *";
        case 3: return "*  **";
        case 4: return "*   *";
        default: return "     ";
    }
}

const char* getRowO(int row) {
    switch (row) {
        case 0: return "*****";
        case 1: return "*   *";
        case 2: return "*   *";
        case 3: return "*   *";
        case 4: return "*****";
        default: return "     ";
    }
}

const char* getRowP(int row) {
    switch (row) {
        case 0: return "*****";
        case 1: return "*   *";
        case 2: return "*****";
        case 3: return "*    ";
        case 4: return "*    ";
        default: return "     ";
    }
}

const char* getRowQ(int row) {
    switch (row) {
        case 0: return "*****";
        case 1: return "*   *";
        case 2: return "* * *";
        case 3: return "*  **";
        case 4: return "*****";
        default: return "     ";
    }
}

const char* getRowR(int row) {
    switch (row) {
        case 0: return "*****";
        case 1: return "*   *";
        case 2: return "**** ";
        case 3: return "*  * ";
        case 4: return "*   *";
        default: return "     ";
    }
}

const char* getRowS(int row) {
    switch (row) {
        case 0: return "*****";
        case 1: return "*    ";
        case 2: return "*****";
        case 3: return "    *";
        case 4: return "*****";
        default: return "     ";
    }
}

const char* getRowT(int row) {
    switch (row) {
        case 0: return "*****";
        case 1: return "  *  ";
        case 2: return "  *  ";
        case 3: return "  *  ";
        case 4: return "  *  ";
        default: return "     ";
    }
}

const char* getRowU(int row) {
    switch (row) {
        case 0: return "*   *";
        case 1: return "*   *";
        case 2: return "*   *";
        case 3: return "*   *";
        case 4: return "*****";
        default: return "     ";
    }
}

const char* getRowV(int row) {
    switch (row) {
        case 0: return "*   *";
        case 1: return "*   *";
        case 2: return "*   *";
        case 3: return " * * ";
        case 4: return "  *  ";
        default: return "     ";
    }
}

const char* getRowW(int row) {
    switch (row) {
        case 0: return "*   *";
        case 1: return "*   *";
        case 2: return "*   *";
        case 3: return "* * *";
        case 4: return " * * ";
        default: return "     ";
    }
}

const char* getRowX(int row) {
    switch (row) {
        case 0: return "*   *";
        case 1: return " * * ";
        case 2: return "  *  ";
        case 3: return " * * ";
        case 4: return "*   *";
        default: return "     ";
    }
}

const char* getRowY(int row) {
    switch (row) {
        case 0: return "*   *";
        case 1: return " * * ";
        case 2: return "  *  ";
        case 3: return "  *  ";
        case 4: return "  *  ";
        default: return "     ";
    }
}

const char* getRowZ(int row) {
    switch (row) {
        case 0: return "*****";
        case 1: return "   * ";
        case 2: return "  *  ";
        case 3: return " *   ";
        case 4: return "*****";
        default: return "     ";
    }
}

// Function to get a specific row of a letter based on the input character
const char* getRow(char ch, int row) {
    switch (ch) {
        case 'a': return getRowA(row);
        case 'b': return getRowB(row);
        case 'c': return getRowC(row);
        case 'd': return getRowD(row);
        case 'e': return getRowE(row);
        case 'f': return getRowF(row);
        case 'g': return getRowG(row);
        case 'h': return getRowH(row);
        case 'i': return getRowI(row);
        case 'j': return getRowJ(row);
        case 'k': return getRowK(row);
        case 'l': return getRowL(row);
        case 'm': return getRowM(row);
        case 'n': return getRowN(row);
        case 'o': return getRowO(row);
        case 'p': return getRowP(row);
        case 'q': return getRowQ(row);
        case 'r': return getRowR(row);
        case 's': return getRowS(row);
        case 't': return getRowT(row);
        case 'u': return getRowU(row);
        case 'v': return getRowV(row);
        case 'w': return getRowW(row);
        case 'x': return getRowX(row);
        case 'y': return getRowY(row);
        case 'z': return getRowZ(row);
        // Add cases for other letters
        case ' ': return "     "; // Handle space characters with 5 spaces
        default: return "     "; // Handle unsupported characters with spaces
    }
}

int main() {
    char input[100];
    int length, row, i;

    printf("Enter a word [in lowercase]: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character if present
    input[strcspn(input, "\n")] = '\0';

    length = strlen(input);

    // Print each row of the letters in sequence
    for (row = 0; row < 5; row++) { // Assuming each letter is 5 rows tall
        for (i = 0; i < length; i++) {
            printf("%s ", getRow(input[i], row));
        }
        printf("\n");
    }
    printf("\n\n---------------\n(-: Designed by HEMANT :-)\n---------------\n");

    return 0;
}

