//To demonstrate the use of bitwise operators

main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	
	printf("Enter the value of b: ");
	scanf("%d",&b);
	
	printf("The Bitwise operations are as below :\n");
	
	printf("a&b = %d\n", a&b); //Bitwise AND operation
	printf("a|b = %d\n", a|b);	//Bitwise OR operation
	printf("a||b = %d\n", a||b); //Logical OR operation
	printf("a^b = %d\n", a^b);	//Bitwise XOR operation
	
	printf("a<<b = %d\n", a<<b);	//Bitwise left-shift operation a<<b = a*(2^b)
	printf("a<<1 = %d\n", a<<1);
	printf("a>>b = %d\n", a>>b);	//Bitwise Right-shift operation a>>b = a/(2^b)
	printf("a>>1 = %d\n", a>>1);
	printf("b<<a = %d\n", b<<a);	//Bitwise left-shift operation b<<a = b*(2^a)
	printf("b<<1 = %d\n", b<<1);
	printf("b>>a = %d\n", b>>a);	//Bitwise Right-shift operation b>>a = b/(2^a)
	printf("b>>1 = %d\n", b>>1);
}
