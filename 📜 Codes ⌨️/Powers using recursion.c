//Powers using recursion
int pow(int,int);
main()
{
	int x,y,p;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter pow: ");
	scanf("%d",&y);
	p=pow(x,y);
	printf("%d^%d = %d",x,y,p);
	
}
int pow(int x,int y)
{
	if(y==0)
	return 1;
	else
	return x*pow(x,y-1);
}
