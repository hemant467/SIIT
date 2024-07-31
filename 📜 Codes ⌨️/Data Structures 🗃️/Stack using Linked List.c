/*Stack using Linked List*/
#include<stdio.h>
struct node
{
	int info;
	struct node *ptr;
};
typedef struct node node;
node *top=NULL,*temp,*newnode;
void push()
{
	int element;
	printf("Enter element: ");
	scanf("%d",&element);
	newnode=(node*)malloc(sizeof(node));
	newnode->info=element;
	newnode->ptr=top;
	top=newnode;
}
void pop()
{
	int k;
	if(top==NULL)
	{
		printf("\nStack is empty\n");
	}
	else
	{
		k=top->info;
		top=top->ptr;
		printf("\nDeleted element is %d\n",k);
	}
}
void display()
{
	temp=top;
	while(temp!=NULL)
	{
		printf("%d",temp->info);
		temp=temp->ptr;
	}
}
main()
{
	int ch;
	while(1)
	{
		printf("\nEnter 1 for PUSH\nEnter 2 for POP\nEnter 3 for Display\nEnter 4 for EXIT\n");
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
			default:printf("INVALID CHOICE");
		}
	}
}

/*
	OUTPUT:
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
	Enter your choice : 50

	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 1
	Enter element: 60

	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 1
	Overflow
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 2
	Deleted element is 60 
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 3
	10 20 30 40 
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 2
	Deleted element is 40 
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 3
	10 20 30 
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 2
	Deleted element is 30 
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 3
	10 20 
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 2
	Deleted element is 20 
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 3
	10 
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 2
	Deleted element is 10 
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 3
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 2
	Underflow
	
	Enter 1 for push
	Enter 2 for pop
	Enter 3 for display
	Enter 4 for exit
	Enter your choice : 4
*/
