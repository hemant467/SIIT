//Charge=(units-200)*5 if units is greater than 200 -> White card
//Charge=units*5 -> No white card
main()
{
	int units,wrc;
	float charge;
	
	printf("Enter no of units: ");
	scanf("%d",&units);
	printf("Enter 1 for wrc' 2 for no 'wrc': ");
	scanf("%d",&wrc);
	{
		if(wrc=1)
		{
			if(units>200)
			{
				charge=(units-200)*5;
			}
			else
			{
				charge=0;
			}
		}
		else
		{
			charge=units*5;
		}
	printf("%f",charge);
	}
}
