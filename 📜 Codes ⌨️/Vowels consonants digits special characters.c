//C program to count the number of vowels and consonants in a string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define str_size 100	//declaring maximum size of the string

int  main()
{
	char str[str_size];	//declare a character array to store the string
	int i,len,vowel=0,consonant=0,special=0,letters=0,digits=0;	//declare variables for iteration, string length, vowel count, consonant count, special characters, letters, digits
	
	printf("Count total number of vowel or consonants in a string \n");
	printf("Input the string: ");
	fgets(str, sizeof str, stdin); //Read a string from the standard input
	
	vowel=0;
	consonant=0;
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			vowel++;
		}
		else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
		{
			consonant++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			digits++;
		}
		else if((str[i]>=0&&str[i]<=47)||(str[i]>=58&&str[i]<=64||str[i]>=91&&str[i]<=96)||(str[i]>=123&&str[i]<=127))
		{
			special++;
		}
	}
	printf("The total number of vowel in a string is: %d\n",vowel);
	printf("The total number of consonants in a string is: %d\n",consonant);
	printf("Digits count is: %d\n",digits);
	printf("Special characters is: %d\n",special);
}
