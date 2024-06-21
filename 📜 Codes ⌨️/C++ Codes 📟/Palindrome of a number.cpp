//Palindrome or not using C++
#include <iostream>
using namespace std;
int main() 
{
    int n, original, r, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    // Store the original value of n
    original = n;

    while (n > 0) 
	{
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    // Compare the reversed number with the original number
    if (sum == original)
        cout << original << " is a Palindrome";
    else
        cout << original << " is not a Palindrome";

    return 0; // Return an integer from main
}
