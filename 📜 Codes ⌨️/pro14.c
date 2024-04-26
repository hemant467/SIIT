int main()
{
	float l,b,perimeter,area;
	printf("Enter length & breadth of a rectangle:");
	scanf("%f%f",&l,&b);
	perimeter = 2*(l+b);
	area = l*b;
	
	printf("Perimeter of a rectangle is : %f units\n",perimeter);
	printf("Area of a rectangle is : %f Sq.units\n",area);
}
