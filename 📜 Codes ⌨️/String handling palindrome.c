//String Handling() Functions to check the given string is palindrome

main()
{
	char a[20],b[20];
	int n;
	printf("Enter a string: ");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	n=strcmpi(a,b);
		if(n==0)
		printf("Palindrome\n");
		else
		printf("Not a Palindrome\n");
}
