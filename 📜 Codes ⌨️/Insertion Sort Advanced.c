/*Insertion Sort*/
main()
{
	int a[20],i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	insertion_sort(a,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void insertion_sort(int a[],int n)
{
	int b[20],i,j;
	b[0]=a[0];
	for(i=1;i<n;i++)
	{
		for(j=i-1;a[i]<b[j]&&j>=0;j--)
		{
			b[j+1]=b[j];
		}
		b[j+1]=a[i];
	}
	for(i=0;i<n;i++)
	a[i]=b[i];
}

/*
	OUTPUT:
		Enter n: 10
		10 4 1 9 3 8 2 6 5 7
		1 2 3 4 5 6 7 8 9 10

		Enter n: 10
		100 40 10 90 30 80 20 60 50 70
		10 20 30 40 50 60 70 80 90 100
*/
