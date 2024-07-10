/*Bubble Sort*/
main()
{
	int a[20],i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	bubble_sort(a,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void bubble_sort(int a[],int n)
{
	int p,c,t,ex;	//p=Pass ; c=Compare ; t=Temporary ; ex=Exchange
	for(p=0;p<n-1;p++)
	for(ex=0,c=0;c<n-p-1;c++)
	if(a[c]>a[c+1])
	{
		t=a[c];
		a[c]=a[c+1];
		a[c+1]=t;
		ex=1;
	}
	if(ex==0)
	return;
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
