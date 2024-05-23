//Using nested-if statement
main()
{
	float a,b,c,choise;
	printf("Enter a: ");
	scanf("%f",&a);
	printf("Enter b: ");
	scanf("%f",&b);
	printf("1-ADDITION \n");
	printf("2-SUBTRACTION \n");
	printf("3-MULTIPLICATION \n");
	printf("4-DIVISION \n");
	printf("Enter your choise: ");
	scanf("%f",&choise);
	
	if(choise==1)
	{
		c=a+b;
		printf("Addition is : %f",c);
	}
	else 
	{
		if(choise==2)
		{	
			c=a-b;
			printf("Subtraction is : %f",c);
		}
		else
		{
		 	if(choise==3)
			{
				c=a*b;
				printf("Multiplication is : %f",c);
			}
			else
			{
				if(choise==4)
				{
					c=a/b;
					printf("Division is : %f",c);
				}
				else
				{
					printf("INVALID CHOISE");
				}
			}
		}
	}
}
