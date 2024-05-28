//Reversing 2 strings and concatinating
main()
{
	char a[100],b[100];
	printf("Enter a string: ");
	scanf("%s",a);
	printf("Enter b string: ");
	scanf("%s",b);
	
	strrev(a);
	strrev(b);
	
	strcat(a,b);
	printf("%s ",a);
}
