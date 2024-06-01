//Search a string
main()
{
	char a[20][20],temp[20];
	int i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter %d strings \n",n);
	
	for(i=0;i<n;i++)
	scanf("%s",a[i]);
	printf("Enter string to be searched: ");
	scanf("%s",temp);
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],temp)==0)
		printf("String is found at place: %d",i+1);
		
	}
	printf("String not found");
}
