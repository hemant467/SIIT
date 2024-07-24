/*Queue : 
		  -> It is a linear structure. In this elements are inserted from 1 end called REAR END & deleted from another end called FRONT END.
		  -> It operates on the principle of FIFO
		  -> FRONT is a pointer which always points 1st elemet in a queue.
		  		Whereas REAR is a pointer which always points last element in a queue.

Operations of linaer queue:
	-> Insertion [ enqueue ]
	-> Deletion  [ dequeue ]
*/
#define max 5
int q[max],front=-1,rear=-1;
void insertion()
{
	int element;
	if(rear==max-1)
	{
		printf("Stack is FULL");
	}
	else
	{
		printf("Enter Element: ");
		scanf("%d",&element);
		printf("\n");
		
		rear++;
		q[rear]=element;
		if(front==-1)
		front=0;
	}
}
void deletion()
{
	int k;
	if(front==-1)
	{
		printf("Stack is EMPTY");
	}
	else
	{
		k=q[front];
		if(front==rear)
		front=rear-1;
		else
		front++;
		printf("Deleted element is %d\n",k);
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	printf("%d ",q[i]);
}
main()
{
	int ch;
	while(1)
	{
		printf("\nEnter 1 for Insertion\nEnter 2 for Deletion\nEnter 3 for Display\nEnter 4 for Exit\n\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insertion(); break;
			case 2:deletion(); break;
			case 3:display(); break;
			case 4:exit(0);
		}
	}
}

/* OUTPUT:
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
Enter Element: 20


Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

1
Enter Element: 30


Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

1
Enter Element: 40


Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

3
10 20 30 40
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
20 30 40
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 20

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 30

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 40

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

3
30 40
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 30

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

3
40
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

2
Deleted element is 40

Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

3
30 40
Enter 1 for Insertion
Enter 2 for Deletion
Enter 3 for Display
Enter 4 for Exit

4
*/
