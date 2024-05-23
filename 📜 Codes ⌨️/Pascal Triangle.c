main()
{
	int i,j,b,n;
	printf("Enter n : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++,printf("\n"))
	{
		for(j=0;j<=n+1-i;j++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			if(j==0)
			b=1;
			else
			b=b*(i-j+1)/j;
			printf("%d ",b);
		}
	}
	
}
