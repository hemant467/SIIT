//Palindrome of a String in C++
#include <iostream>
using namespace std;

int main() 
{
    char str[20], choice;
    int i, length, flag;

    do {
        flag = 0;
        length = 0;
        cout << "Enter a string: ";
        cin >> str;

        // Calculate the length of the string manually
        while (str[length] != '\0') 
		{
            length++;
        }

        // Check if the string is palindrome
        for (i = 0; i < length / 2; i++) 
		{ // Only need to iterate till the middle
            if (str[i] != str[length - i - 1]) 
			{ // Compare characters from start to end
                flag = 1; // flag if characters don't match
                break;
            }
        }

        if (flag)
            cout << str << " is not a palindrome" << endl;
        else
            cout << str << " is a palindrome" << endl;

        cout << "\n\nDo you want to check another string? (y/n): ";
        cin >> choice;
    } 
	while (choice == 'y' || choice == 'Y');

    cout << "\n\nTHANK YOU :) for running the code\n\n";
    return 0;
}
