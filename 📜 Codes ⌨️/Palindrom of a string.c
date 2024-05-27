//Check wether the given string is palindrome or not
int main()
{
	char str[20];
	int i,length=0,flag=0;
	printf("Enter a string: ");
	scanf("%s",str);
	while(str[length]!='\0')	//Calculate the length of the string
	length++;
	for(i=0;i<length;i++)	//Check if the string is palindrome
	if(str[i]!=str[length-i-1])	//Compare characters from start to end
	{
		flag=1;	//flag if characters don't match
		break;
	}
	if(flag)
	printf("%s is not a palindrome",str);
	else
	printf("%s is a palindrome",str);
}
