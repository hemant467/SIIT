/*Double dimensional array
Addition of 2 matrices*/

main()
{
	int a[100][100],b[100][100],c[100][100],i,j,r1,c1;
	printf("Enter number of rows (between 1 and 100): ");
	scanf("%d",&r1);
	printf("Enter number of columns (between 1 and 100): ");
	scanf("%d",&c1);
	
	printf("\nEnter matrix A:\n");
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		scanf("%d",&a[i][j]);
		
		printf("\nEnter matrix B:\n");
		for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		scanf("%d",&b[i][j]);
		
		for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
		c[i][j] = a[i][j] + b[i][j];
		
		printf("\nSum of two matrices: \n");
		for(i=0;i<r1;++i)
		for(j=0;j<c1;++j)
			{
				printf("%d  ",c[i][j]);
				if(j==c1-1)
				{
					printf("\n");
				}
			}
}
