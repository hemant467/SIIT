//Program to find sum of 'n' number of digits
int main()
{
	int n,reverse=0,rem;
	printf("Enter number to be reversed: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n/=10;
	}
	printf("The reversed number is: %d",reverse);
}
