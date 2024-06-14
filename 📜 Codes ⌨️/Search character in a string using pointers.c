//To search character in a string using pointers

int main() {
    char str[100], find, *p;
    int found = 0, i = 0;

    printf("Enter a string: ");
    gets(str); // Using gets to read the input string

    printf("Enter the character to be searched: ");
    scanf("%c", &find);

    p = str; // Point p to the start of the string

    while (*(p + i) != '\0') 
	{
        if (*(p + i) == find) 
		{
            found = 1;
            break;
        }
        i++;
    }

    if (found) 
	{
        printf("Character '%c' is found at position %d\n", find, i + 1);
    } 
	else 
	{
        printf("Character '%c' is not present\n", find);
    }

    return 0;
}
