//Structures
main()
{
	struct abc
	{
		char x[20];
		int y;
		float z;
	};
	struct abc p={"happy",64,4.8};
	printf("%s %d %f",p.x,p.y,p.z);
}
