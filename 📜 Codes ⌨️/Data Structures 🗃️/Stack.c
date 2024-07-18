/*Stack: It is a linear data structure. The data is inserted from top end & deleted from the same end.
		 It operates on the principle of LIFO.
		 TOP is a pointer which always points TOP of the stack.
		 Stack is "Finite".
		 *Overflow	*Underflow

Operations:
	*Push
	*Pop
	*Traverse
	
#define : It is a macro, which substitutes the code.
typedef : It is used to rename a datatype.
*/

#define max 5	//5 -> Some size alloted for max
int s[max],top=-1;
void push()
{
	int element;
	if(top==max-1)
	{
		printf("Overflow");
		return;
	}
	printf("Enter element: ");
	scanf("%d",&element);
	top++;
	s[top]=element;
}

void pop()
{
	int k;
	if(top==-1)
	{
		printf("Underflow");
		return;
	}
	k=s[top];
	top--;
	printf("Deleted element is %d ",k);
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	printf("%d ",s[i]);
}
main()
{
	int ch;
	while(1)
	{
		printf("Enter 1 for push \n" "Enter 2 for pop \n" "Enter 3 for display \n" "Enter 4 for exit \n" "Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
		}
	}
}

/*	OUTPUT:

			Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 1
			Enter element: 10
			Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 1
			Enter element: 20
			Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 3
			10 20 Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 1
			Enter element: 30
			Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 1
			Enter element: 40
			Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 1
			Enter element: 50
			Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 3
			10 20 30 40 50 Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 2
			Deleted element is 50 Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 2
			Deleted element is 40 Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 3
			10 20 30 Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 2
			Deleted element is 30 Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 3
			10 20 Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 1
			Enter element: 40
			Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 3
			10 20 40 Enter 1 for push
			Enter 2 for pop
			Enter 3 for display
			Enter 4 for exit
			Enter your choice : 4

--------------------------------
Process exited after 130.2 seconds with return value 0
Press any key to continue . . .
*/
