/* Evaluation of Postfix Expression :
-> Initialize stack.
-> Scan postfix expression from left to right each character once.
-> If scan symbol is an operand PUSH it into stack.
-> gIf it is an operator POP 2 elements from stack, apply the operator & PUSH the result into stack.
*/
#include <stdio.h>
#include <ctype.h>
#include <math.h>

#define max 10	//10 -> some size for max

int s[max], top = -1;

void push(int element) 
{
    if (top < max - 1) 
	{
        s[++top] = element;
    } 
	else 
	{
        printf("Stack Overflow\n");
    }
}

int pop() 
{
    if (top >= 0) 
	{
        return s[top--];
    } 
	else 
	{
        printf("Stack Underflow\n");
        return -1; // Return an error value
    }
}

int main() 
{
    char a[100];
    int i, n1, n2;

    printf("Enter Postfix expression: ");
    scanf("%s", a);

    for (i = 0; a[i] != '\0'; i++) 
	{ // Use equality operator here
        if (isdigit(a[i])) 
		{
            push(a[i] - '0'); // Convert char to int
        } 
		else 
		{
            n1 = pop();
            n2 = pop();
            switch (a[i]) 
			{
                case '+': push(n2 + n1); break;
                case '-': push(n2 - n1); break;
                case '*': push(n2 * n1); break;
                case '/': push(n2 / n1); break;
                default: push((int)pow(n2, n1)); // Use type cast to int
            }
        }
    }

    if (top != -1) 
	{
        printf("Result: %d\n", s[top]);
    } 
	else 
	{
        printf("Invalid Expression\n");
    }

    return 0;
}

/*	OUTPUT:
			Enter Postfix expression: 45+
			Result: 9
			
			Enter Postfix expression: 256*+
			Result: 32
			
			Enter Postfix expression: 854*+
			Result: 28
			
			Enter Postfix expression: 854*+-
			Stack Underflow
			Result: -29
*/
