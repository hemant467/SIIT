//To find sum & average of an array
int main()
{
	int n,i;
	float sum=0.0,avg;
	
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/n;
	printf("Sum= %f\n",sum);
	printf("Average= %f\n",avg);
}
