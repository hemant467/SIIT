//Diamond pattern
main()
{
	int n,i=1,j;	//i-rows ; j-columns
	printf("Enter no of rows: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		j=n;
		while(j>i)
		{
			printf(" ");
			j--;
		}
		
		printf("*");
		j=1;
		while(j<(i-1)*2)
		{
		printf(" ");
		j++;
		}
	if(i==1)
	{
		printf("\n");
	}
	else
	{
		printf("*\n");
	}
	i++;
	}
	i=n-1;
	while(i>=1)
	{
		j=n;
		while(j>i)
		{
			printf(" ");
			j--;
		}
		printf("*");
		j=1;
		while(j<(i-1)*2)
		{
			printf(" ");
			j++;
		}
		if(i==1)
		{
			printf("\n");
		}
		else
		{
			printf("* \n");
		}
		i--;
	}
}
