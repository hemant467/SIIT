main()
{
	int a=5,b=10,c;
	
	c=a+b;
	printf("c=a+b = %d\n",c);
	c+=a;
	printf("c+=a= %d\n",c);
	c-=a;
	printf("c-=a= %d\n",c);
	c*=a;
	printf("c*=a= %d\n",c);
	a=10;
	c=15;
	c/=a;
	printf("c/=a= %d\n",c);
	c%=a;
	printf("c%=a= %d\n",c);
	c&=a;
	printf("c&=a= %d\n",c);
	c|=a;
	printf("c|=a= %d\n",c);
	c<<=a;
	printf("c<<=a= %d\n",c);
	c>>=a;
	printf("c>>=a= %d\n",c);
	c<<=2;
	printf("c<<=2= %d\n",c);
	c>>=2;
	printf("c>>=2= %d\n",c);
	c^=a;
	printf("c^=a= %d\n",c);
		
}
