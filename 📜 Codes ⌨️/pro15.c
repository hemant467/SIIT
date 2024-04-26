int main()
{
	int min,hrs;
	printf("Enter no minutes: ");
	scanf("%d",&min);
	hrs=min/60;
	
	printf("%d minutes is equal to %d hours\n",min,hrs);
	//convert hrs to min
	printf("Enter no of hours : ");
	scanf("%d",&hrs);
	min=hrs*60;
	printf("%d hours is equal to %d minutes",hrs,min);
}
