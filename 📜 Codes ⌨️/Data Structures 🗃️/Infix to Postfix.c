/*Infix to Postfix 
Infix 	: 7+9-(2*5+6)*4/2
Postfix : 79+25*6+4*2/-
*/
#define max 10
char s[max];
int top=-1;
char pop();
int precedence(char);
main()
{
	char a[100],ch;
	int i;
	printf("Enter infix expression: ");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(isalnum(a[i]))
		printf("%c",a[i]);
		else if(a[i]=='(')
		push(a[i]);
		else if(a[i]==')')
		{
			while((ch=pop())!='(')
			printf("%c",ch);
		}
		else
		{
			while(top!=-1&&precedence(s[top])>=precedence(a[i]))
			printf("%c",pop());
			push(a[i]);
		}
	}
	while(top!=-1)
	printf("%c",pop());
}
void push(char x)
{
	s[++top]=x;
}
char pop()
{
	return s[top--];
}
int precedence(char x)
{
	switch(x)
	{
		case '-':
		case '+':return 1;
		case '*':
		case '/':return 2;
		case '^':return 4;
		default:return 0;
				
	}
}

/*OUTPUT:
		Enter infix expression: 7+9-(2*5+6)*4/2
		79+25*6+4*2/-
*/
