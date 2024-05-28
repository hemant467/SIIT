//To insert sub-string into a main-string from starting position 'm' index
main()
{
	char a[40],b[20],c[20];
	int i,j,index;
	printf("Enter main string: ");
	scanf("%s",a);
	printf("Enter sub string: ");
	scanf("%s",b);
	printf("Enter index to insert: ");
	scanf("%d",&index);
	
	int count=0;
	while(a[count]!='\0')
	count++;
	
	if(index <= 0 && index > count+1)
	{
		printf("Not possible");
	}
	else
	{
		for(i=0,j=0;j<index-1;j++,i++)
		c[i]=a[j];
		for(j=0;b[j]!='\0';i++,j++)
		c[i]=b[j];
		for(j=index-1;a[j]!='\0';j++,i++)
		c[i]=a[j];
		c[i]='\0';
		printf("%s",c);
	}
}
