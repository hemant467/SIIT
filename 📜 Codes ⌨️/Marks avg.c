main()
{
	float s1,s2,s3,s4,s5,avg;
	printf("Enter 5 subject marks: ");
	scanf("%f\n%f\n%f\n%f\n%f",&s1,&s2,&s3,&s4,&s5);
	avg=(s1+s2+s3+s4+s5)/5;
	if(avg>90)
	printf("Distinction");
	else if(avg>80&&avg<=90)
	printf("First class");
	else if(avg>70&&avg<=80)
	printf("Second class");
	else if(avg>60&&avg<=70)
	printf("Third class");
	else if(avg>50&&avg<=60)
	printf("Pass");
	else
	printf("Fail");
}
