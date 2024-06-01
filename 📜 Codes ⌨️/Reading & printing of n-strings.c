//reading & printing of n-Strings
main()
{
	char a[20][20];
	int i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter %d strings \n",n);
	
	for(i=0;i<n;i++)
	scanf("%s",a[i]);
	for(i=0;i<n;i++)
	printf("%s\n",a[i]);
}
