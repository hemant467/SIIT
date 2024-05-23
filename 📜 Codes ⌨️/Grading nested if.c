//Grading system using nested-if
int main()
{
	float marks;
	printf("Enter your marks: ");
	scanf("%f", &marks);
	
	if(marks>=95)
	{
		printf("Grade: O\n");
	}
	else if(marks>=90)
	{
		printf("Grade: A\n");
	}
	else if(marks>=80)
	{
		printf("Grade: B\n");
	}
	else if(marks>=70)
	{
		printf("Grade: C\n");
	}
	else if(marks>=60)
	{
		printf("Grade: D\n");
	}
	else
	{
		printf("Grade: F\n");
	}
}
