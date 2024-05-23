//Sorting an array in ascending & descending order
int main()
{
	int a[20],n,i,j,temp;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("\nElements of array sorted in ascending order: \n");
	
	for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[j]<a[i])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("\n\nElements of array sorted in descending order: \n");
	for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
}
