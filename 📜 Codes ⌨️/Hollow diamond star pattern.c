main()
{
	int i,j,n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	//Top half loop
	for(i=0;i<=n;i++)	//iterate rows
	{
		for(j=0;j<=2*n+1;j++)	//iterate columns
		{
			if((n-i<j)&&(j<n+1+i))	//Spaces are printed within the boundaries of diamond shape. Upper half & Middle row of the diamond
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
	
	//Bottom half loop
	for(i=0;i<=n;i++)	//iterate rows
	{
		for(j=0;j<=2*n+1;j++)	//iterate columns
		{
			if((i<j)&&(j<2*n+1-i))	//Spaces are printed within the boundaries of diamond shape. Lower half of the diamond
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
}
