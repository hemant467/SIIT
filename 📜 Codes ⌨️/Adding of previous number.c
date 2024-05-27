main()
{
	int a[20],b[20],i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	b[0]=a[0];
		for(i=1;i<n;i++)
		b[i]=a[i]+a[i-1];
		for(i=0;i<n;i++)
		printf("%d ",b[i]);
}
