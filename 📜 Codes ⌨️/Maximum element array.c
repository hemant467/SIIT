//Find the maximum element in an array

int main()
{
	int n,i,max;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("Maximum element is : %d\n",max);
}
