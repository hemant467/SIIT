//String handling function - 2
//Insert sub-string into a main-string from starting position 'm' using string handling functions
//String handling() = strlen(); strncpy() ; strcat()
int main()
{
	char a[40],b[20],c[100];
	int i,count,index;
	
	printf("Enter a string: ");
	scanf("%s",a);
	printf("Enter b string: ");
	scanf("%s",b);
	printf("Enter index to insert: ");
	scanf("%d",&index);
	
	count=strlen(a);
	
	if(index<=0||index>count+1)
	{
		printf("Not possible \n");
	}
	else
	{
		strncpy(c,a,index-1);	//Copy before the index
		c[index-1]='\0';	//NULL terminates the string
		
		strcat(c,b);	//Concat sub-string b into c
		
		strcat(c,a+index-1);
		printf("%s\n",c);
	}
	return 0;
}
