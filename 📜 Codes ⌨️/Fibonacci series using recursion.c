//Fibonacci series using recursion
int fib(int );
int main()
{
	int i,n,f;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=fib(i);
		printf("%d ",f);
	}
}
int fib(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
