/*Queue using Linked List*/
#include<stdio.h>
struct node
{
	int info;
	struct node *ptr;
};
typedef struct node node;
node *front=NULL ,*rear=NULL,*temp,*newnode;
void insert()
{
	int element;
	printf("Enter element: ");
	scanf("%d",&element);
	newnode=(node*)malloc(sizeof(node));
	newnode->info=element;
	newnode->ptr=NULL;
	
	if(front==NULL)
	front=rear=newnode;
	else
	rear=rear->ptr=newnode;
}
void delete()
{
	int k;
	k=front->info;
	printf("Deleted element is %d",k);
	if(front==rear)
	front=rear=NULL;
	else
	front=front->ptr;
}
void display()
{
	temp=front;
	while(temp!=NULL)
	{
		printf("%d",temp->info);
		temp=temp->ptr;
	}
}
void main()
{
	int ch;
	while(1)
	{
		printf("\nEnter 1 for INSERT\nEnter 2 for DELETE\nEnter 3 for Display\nEnter 4 for EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			break;
			case 2:delete();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default:printf("INVALID CHOICE");
		}
	}
}

/*OUTPUT:

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

1
Enter Element: 10


Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

1
Enter Element: 9


Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

1
Enter Element: 8


Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

1
Enter Element: 1


Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

1
Enter Element: 2


Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

1
Stack is FULL
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

3
10 9 8 1 2
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 10

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

3
9 8 1 2
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 9

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 8

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

3
1 2
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 1

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 2

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 1

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 2

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

3
1 2
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 1

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

3
2
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 2

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

3
1 2
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

3
1 2
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

4
*/
