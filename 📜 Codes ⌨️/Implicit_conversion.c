int main()
{
	double num_double;
	printf("Enter num_double: ");
	scanf("%lf",&num_double);
	
	int num_int;
	printf("Enter num_int: ");
	scanf("%d",&num_int);
	
	double result = num_double / (double)num_int;
	
	printf("Result for explicit type casting with arithmetic operations: %f\n",result);
	
}
