void main()
{
	int days, months, weeks;
	printf("Enter days:");
	scanf("%d",&days);
	months = days/30;
	days = days%30;
	weeks = days/7;
	days = days%7;
	printf("%d months %d weeks %d days",months,weeks,days);
}
