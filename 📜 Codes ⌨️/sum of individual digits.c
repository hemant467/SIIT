int main()
{
	int m,n,s=0;
	
	printf("Enter n: ");
	scanf("%d",&n);
	do{
		m=n%10;
		s=s+m;
		n=n/10;
	}
	while(n!=0);
	
	printf("Sum of individual digits is: %d\n",s);
}
