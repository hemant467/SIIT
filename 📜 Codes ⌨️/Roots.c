main()
{
	double a,b,c,d;
	printf("Enter a,b,c: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	
	d=(b*b)-4*a*c;
	if(d==0)
	{
		printf("Real & equal");
	}
	else
	{
		if(d>0)
		{
			printf("Real & not equal");
		}
		else
		{
			printf("imaginary");
		}
	}
}
