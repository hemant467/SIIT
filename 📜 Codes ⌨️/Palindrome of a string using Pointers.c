//Palindrome of a string using Pointers*
void main() {
    char str[20], choice;
    int length, flag, i;
    char *p, *q;

    do {
        flag = 0;
        length = 0;
        printf("Enter a string: ");
        scanf("%s", str);
        
        p = str; // Initialize pointer to point to the start of the string
        while (*(p + length) != '\0') // Calculate the length of the string using pointer
            length++;
        
        p = str; // Reset pointer to the start of the string
        q = str + length - 1; // Pointer to the end of the string
        
        for (i = 0; i < length / 2; i++) { // Check if the string is palindrome
            if (*(p + i) != *(q - i)) { // Compare characters using pointers
                flag = 1; // flag if characters don't match
                break;
            }
        }
        
        if (flag)
            printf("%s is not a palindrome", str);
        else
            printf("%s is a palindrome", str);
        
        printf("\n\nDo you want to check another string? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    
    printf("\n\nTHANK YOU :) for running the code\n\n");
    printf("\nDesigned by Hemant\n");
}
