//String Handling() Functions to find sub-string in a main string

main()
{
	char a[20],b[20];
	char *n;
	printf("Enter a string: ");
	scanf("%s",a);
	printf("Enter sub string: ");
	scanf("%s",b);
	n=strstr(a,b);
	printf("%d",n-a);
}
