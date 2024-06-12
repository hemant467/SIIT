//Average of n-subject marks using pointers
main()
{
	int a[20],n,i,sum=0;
	float avg;
	int *p;
	printf("Enter no.of subjects: ");
	scanf("%d",&n);
	printf("Enter subject marks: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	p=a;
	for(i=0;i<n;i++)
	sum=sum+ *(p+i);
	avg=(float)sum/n;
	printf("\nAverage: %f\n",avg);
}
