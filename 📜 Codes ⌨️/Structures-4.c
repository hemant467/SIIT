//Structures
main()
{
	struct abc
	{
		char x[20];
		int y;
		float z;
	};
	struct abc p[20];
	int i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter student details: ");
	for(i=0;i<n;i++)
	scanf("%s %d %f",p[i].x,&p[i].y,&p[i].z);
	for(i=0;i<n;i++)
	printf("%s %d %f\n",p[i].x,&p[i].y,&p[i].z);
}
