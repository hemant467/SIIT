//To print characters in a string
int main()
{
	char str[20];
	int i=0;
	printf("Enter any string: ");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		printf("The character at %d index position = %c \n",i,str[i]);
		i++;
	}
}
