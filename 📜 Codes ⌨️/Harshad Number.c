/* Harshad Number : An integer that is divisible by the sum of its digits when written in that base
Harshad numbers in base 10 form the sequence: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 18, 20, 21, 24, 27, 30, 36, 40, 42, 45, 48, 50, 54, 60, 63, 70, 72, 80, 81, 84, 90, 100, 102, 108, 110, 111, 112, 114, 117, 120, 126, 132, 133, 135, 140, 144, 150, 152, 153, 156, 162, 171, 180, 190, 192, 195, 198, 200, ...

Ex: 
	24
	2+4=6
	24/6=4 -> Divisible of the sum is Harshad Number
*/
#include<stdio.h>
int checkHarshad(int num)
{
	int sum=0;
	int temp=num;
	while(temp!=0)
	{
		sum=sum+temp%10;
		temp/=10;
	}
	return num%sum==0;
}
int main()
{
	int num;
	char choice;
	do{
		printf("Enter number: ");
		scanf("%d",&num);
		if(checkHarshad(num))
		printf("%d is a Harshad's number. \n",num);
		else
		printf("%d is not a Harshad's number. \n",num);
		
	//Clear the input buffer
	fflush(stdin);
	printf("\n\nDo you want to check another number? (y/n): ");
	scanf("%c",&choice);
	}
	while(choice=='y'||choice=='Y');
	printf("\n\nThank you for running the code :) \n");
	printf("Designed & Developed by Hemant :) \n");
}
