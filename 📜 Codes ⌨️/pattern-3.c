main()
{
	int i,j;
	for(i=1;i<=5;i++,printf("\n"))
	{
		for(j=1;j<=6-i;j++,printf(" "));
		for(j=1;j<=i;j++,printf("* "));
	}
}
