//To sort n-strings in ascending order
main()
{
	char a[20][20],t[20];
	int i,j,n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter %d strings:\n",n);
	
	for(i=0;i<n;i++)
	scanf("%s",a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(t,a[j]);strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
	printf("%d String are arranged in ascending order : \n",n);
	for(i=0;i<n;i++)
	printf("%s\n",a[i]);
}
