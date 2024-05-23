//Diamond pattern any character
int main()
{
	int i,j,k;
	char ch;
	
	printf("Enter any character: ");
	scanf("%c",&ch);
	printf("Enter no of rows: ");
	scanf("%d",&i);
	
	for(k=1;k<=i;k++)
	{
		for(j=1;j<=i-k;j++)
		printf(" ");
		for(j=1;j<=2*k-1;j++)
		printf("%c",ch);
		
		printf("\n");
	}
	
	for(k=1;k<=i-1;k++)
	{
		for(j=1;j<=k;j++)
		printf(" ");
		for(j=1;j<=2*(i-k)-1;j++)
		printf("%c",ch);
		
		printf("\n");
	}
}
