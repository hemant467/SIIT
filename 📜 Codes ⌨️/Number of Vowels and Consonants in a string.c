//C program to count the number of vowels and consonants in a string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define str_size 100	//declaring maximum size of the string

int  main()
{
	char str[str_size];	//declare a character array to store the string
	int i,len,vowel,consonant;	//declare variables for iteration, string length, vowel count, and consonant count
	
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
	}
	printf("The total number of vowel in a string is: %d\n",vowel);
	printf("The total number of consonants in a string is: %d\n",consonant);
}
