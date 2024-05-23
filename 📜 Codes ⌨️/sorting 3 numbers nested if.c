//Sorting 3 numbers using nested if()
int main()
{
	int num1,num2,num3;
	printf("Enter num1: ");
	scanf("%d",&num1);
	printf("Enter num2: ");
	scanf("%d",&num2);
	printf("Enter num3: ");
	scanf("%d",&num3);
	
	if(num1 >= num2)
	{
		if(num1 >= num3)
		{
			printf("Largest number is: %d\n",num1);
		}
		else
		{
			printf("Largest number is: %d\n",num3);
		}
	}
	else
	{
		if(num2 >= num3)
		{
			printf("Largest number is: %d\n",num2);
		}
		else
		{
			printf("Largest number is: %d\n",num3);
		}
	}
}
