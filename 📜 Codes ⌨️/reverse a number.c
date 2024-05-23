//Reverse a number using do-while()
main()
{
	int m,n,s=0;
	
	printf("Enter n: ");
	scanf("%d",&n);
	do{
		m=n%10;
		s=s*10+m;
		n=n/10;
	}
	while(n!=0);
	printf("The reversed number is: %d",s);
}
