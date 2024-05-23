main()
{
	int a,b,c,lcm;
	printf("enter a,b");
	scanf("%d%d",&a,&b);
	c=a*b;
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;
	}
	lcm=c/a;
	printf("lcm of %d & %d is %d\n",a,b,lcm);
}
