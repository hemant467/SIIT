/*Selection Sort*/
main()
{
	int a[20],i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selection_sort(a,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void selection_sort(int a[],int n)
{
	int i,j,small,t;	//t=Temporary
	for(i=0;i<n-1;i++)
	{
		for(small=i,j=i+1;j<n;j++)
		{
			if(a[j]<a[small])
			small=j;
		}
		t=a[i];
		a[i]=a[small];
		a[small]=t;
	}
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
