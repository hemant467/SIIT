//Print Smallest or Biggest number in an array
main()
{
	int a[20],i,n,min,max;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("enter numbers: ");
	
	for(i=0;i<n;++i)
	scanf("%d",&a[i]);
	
	min=a[0];
	max=a[0];
	
	for(i=1;i<n;++i)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("Smallest number is : %d\n",min);
	printf("Biggest number is  : %d\n",max);
}
