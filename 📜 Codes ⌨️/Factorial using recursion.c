//Factorial using recursion
int fact(int n);
main()
{
	int n,f;
	printf("Enter n: ");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial of %d is %d",n,f);
}
int fact(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return n*fact(n-1);
}
