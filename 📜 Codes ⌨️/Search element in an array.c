//To search an element in an array
int main()
{
	int a[100],size,i,find,found;
	
	printf("Enter size of an array : ");
	scanf("%d",&size);
	
	
	printf("Enter elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element to be searched : ");
	scanf("%d",&find);
	
	found=0;
	
	for(i=0;i<size;i++)
	{
		if(a[i]==find)
		{
			found=1;
			break;
		}
	}
	
	if(found==1)
	{
		printf("%d is found at position %d \n",find,i+1);
	}
	else
	{
		printf("%d is not present",find);
	}
}
