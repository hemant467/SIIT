//FLAMES using string handling and character type handling functions

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to remove a character from a string at a specific index
void removeCharAtIndex(char *str, int index) 
{
    int len = strlen(str); // Calculate the length of the string
    int i = index; // Start from the specified index
    while (i < len - 1) // Loop until the second last character
	{ 
        str[i] = str[i + 1]; // Shift each character to the left by one position
        i++; // Move to the next character
    }
    str[len - 1] = '\0'; // Terminate the string at the new length
}


// Function to play the FLAMES game
void playFLAMES(char *name1, char *name2) 
{
    int count1 = strlen(name1);
    int count2 = strlen(name2);
    
    // Eliminate common characters
    int i = 0;
    while (name1[i] != '\0') // Iterate through each character in name1
	{ 
    	int j = 0;
    	while (name2[j] != '\0') // Iterate through each character in name2
		{ 
        	if (tolower(name1[i]) == tolower(name2[j]))	// If characters match ignoring case
            {
				removeCharAtIndex(name1, i); // Remove the character at index i from name1
            	removeCharAtIndex(name2, j); // Remove the character at index j from name2
            	count1--; // Decrement count of characters in name1
            	count2--; // Decrement count of characters in name2
            	i--; // Adjust index after removal to recheck the current index
            	break; // Break out of the inner loop since a match is found
        	}
        j++; // Move to the next character in name2
    	}
    	i++; // Move to the next character in name1
	}
	

    // Concatenate names
    strcat(name1, name2);

    // Determine the length of the combined name
    int length = strlen(name1);

    // FLAMES algorithm
    char flames[] = "FLAMES";
    int flamesLength = strlen(flames);
    int flamesIndex = 0;	// Index to track the current letter in FLAMES

    // Play FLAMES
    i = 0;
    while (i < flamesLength - 1) 
	{
		// Calculate the number of letters to skip based on the length of the names and the remaining letters in FLAMES
        int skip = length % (flamesLength - i); // If skip is 0, it means the length of the names is divisible by the remaining letters in FLAMES
		// In this case, set skip to the number of remaining letters in FLAMES
        if (skip == 0) 
		{
            skip = flamesLength - i;
        }
        
        // Update the flamesIndex to determine the letter to be removed from FLAMES
        flamesIndex = (flamesIndex + skip - 1) % (flamesLength - i);
        
        // Remove the letter at flamesIndex from FLAMES
		int j = flamesIndex;
        while (j < flamesLength - i - 1) 
		{
            flames[j] = flames[j + 1];
            j++;
        }
        // Move to the next letter in FLAMES
        i++;
    }

    // Output result
    switch (flames[0]) 
	{
        case 'F':
            printf("You both are Friends!\n");
            break;
        case 'L':
            printf("You both are in Love!\n");
            break;
        case 'A':
            printf("You have an Affection!\n");
            break;
        case 'M':
            printf("You both are Meant to be together (Marriage)!\n");
            break;
        case 'E':
            printf("You both are Enemies!\n");
            break;
        case 'S':
            printf("You both are Siblings!\n");
            break;
        default:
            printf("Invalid result!\n");
    }
}

int main() 
{
    char name1[100], name2[100];

    printf("Enter the first name: ");
    scanf("%s", name1);

    printf("Enter the second name: ");
    scanf("%s", name2);

    playFLAMES(name1, name2);

    return 0;
}
