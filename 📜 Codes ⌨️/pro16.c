//Sum of individual digits of 3 numbers
main()
{
	int n,m,s=0;
	printf("Enter n");
	scanf("%d",&n);
	
	m=n%10;
	s=s+m;
	n=n/10;
	m=n%10;
	s=s+m;
	n=n/10;
	m=n%10;
	s=s+m;
	n=n/10;
	printf("%d",s);
}
