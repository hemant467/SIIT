//Program to check if a number is both a palindrome and an armstrong number using do-while()
#include<stdio.h>
#include<math.h>

int main()
{
	int n,original_num,reversed_num=0,remainder,sum=0,num_digits=0;
	
	//input number from user
	printf("Enter an integer: ");
	scanf("%d",&n);
	
	original_num=n;
	
	do{
		num_digits++;
		n /= 10;
	}while(n!=0);
	
	n = original_num;
	
	do{
		remainder = n%10;
		reversed_num = reversed_num*10+remainder;
		sum += pow(remainder,num_digits);	//Add the digit raised to num_digits to the sum
		n/=10;	//Remove the last digit from the number
	} while(n!=0);	//Continue until n becomes 0
	
	//Check if the number is palindrome
	if(original_num == reversed_num)
	{
		printf("%d is a palindrome number \n",original_num);
	}
	else
	{
		printf("%d is not a palindrome number \n",original_num);
	}
	
	//Check if the number is Armstrong
	if(sum == original_num)
	{
		printf("%d is an armstrong number \n",original_num);
	}
	else
	{
		printf("%d is not a armstrong number \n",original_num);
	}
}
