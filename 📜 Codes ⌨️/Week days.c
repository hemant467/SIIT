int main()
{
	int weekday;
	printf("Enter the day number from 1-7:");
	scanf("%d",&weekday);
	
	if(weekday==1)
	{
		printf("MONDAY");
	}
	else if(weekday==2)
	{
		printf("TUESDAY");
	}
	else if(weekday==3)
	{
		printf("WEDNESDAY");
	}
	else if(weekday==4)
	{
		printf("THURSDAY");
	}
	else if(weekday==5)
	{
		printf("FRIDAY");
	}
	else if(weekday==6)
	{
		printf("SATURDAY");
	}
	else if(weekday==7)
	{
		printf("SUNDAY");
	}
	else printf("INVALID NUMBER");
}
