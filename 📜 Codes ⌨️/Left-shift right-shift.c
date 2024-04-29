main()
{
	int x;
	printf("enter the value of x: ");
	scanf("%d",&x);
	
	printf("Left shift operation:\n x << 3 = %d\n", x<<3);	//a<<n = a*(2^n)
	printf("Right shift operation:\n x >> 3 = %d\n", x>>3);	//a>>n = a/(2^n)
}
