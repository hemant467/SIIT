//Hollow diamond pattern any character
main()
{
	int i,j,n;
	char ch;
	printf("Enter any character or digits : ");
	scanf("%c",&ch);
	printf("Enter n : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)	//i=0 to i=n iterate over rows
	{
		for(j=0;j<=2*n+1;j++)	//j=0 to j<=2*n+1 iterate over columns
		{
			if((n-i<j)&&(j<n+1+i))	//Print space or character
			printf(" ");
			else
			printf("%c",ch);
		}
		printf("\n");
	}
	for(i=0;i<=n;i++)	//Bottom Half
	{
		for(j=0;j<=2*n+1;j++)
		{
			if((i<j)&&(j<2*n+1-i))	//Print space or character
			printf(" ");
			else
			printf("%c",ch);
		}
		printf("\n");
	}
}
