//Program to check the given matrix is symmetry or not
main()
{
	int a[100][100],b[100][100],i,j,r,c;
	printf("Enter rows (between 1 and 100): ");
	scanf("%d",&r);
	printf("Enter columns (between 1 and 100): ");
	scanf("%d",&c);
	
	if(r=c)
	{
		printf("\nEnter matrix A: \n");
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
		
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		b[j][i]=a[i][j];
		
		for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				printf("Not Symmetry");
				exit(0);
			}
		}
		printf("Symmetry");
	}
	else
	{
		printf("Not possible");
	}
}
