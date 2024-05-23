//Sum of n-integers
#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum of first %d numbers is %d",n,sum);
}
