//Sorting using pointers
main()
{
	int a[20],n,i,j,temp;
	int *p;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("Enter numbers: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	if(*(a+j) < *(a+i))
	{
		temp= *(a+i);
		*(a+i)= *(a+j);
		*(a+j)=temp;
	}
	printf("\nElements of array sorted in ascending order: \n");
	p=a;
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
}
