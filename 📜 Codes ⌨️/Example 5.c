//Converting minutes to hours
//1hr=60min

main()
{
	int min,hrs,remaining_min;
	printf("enter no of minutes:");
	scanf("%d",&min);
	hrs=min/60;
	remaining_min=min%60;
	
	printf("%d minutes is equal to %d hour and %d minutes",min,hrs,remaining_min);
}
