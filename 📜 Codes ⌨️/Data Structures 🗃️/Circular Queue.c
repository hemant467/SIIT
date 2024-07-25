/*Circular Queue:
	rear = (rear+1) % max
	rear+1 =front
*/
#include <stdio.h>
#include <stdlib.h>

#define max 5
int q[max], front = -1, rear = -1;

void insertion() 
{
    int element;
    if ((rear + 1) % max == front) 
	{
        printf("Queue is FULL\n");
    } 
	else 
	{
        printf("Enter element: ");
        scanf("%d", &element);
        rear = (rear + 1) % max;
        q[rear] = element;
        if (front == -1)
            front = 0;
    }
}

void deletion() 
{
    int k;
    if (front == -1) 
	{
        printf("Queue is EMPTY\n");
    } 
	else 
	{
        k = q[front];
        if (front == rear) 
		{
            front = rear = -1;
        } 
		else 
		{
            front = (front + 1) % max;
        }
        printf("Deleted element is %d\n", k);
    }
}

void display() 
{
    int i;
    if (front == -1) 
	{
        printf("Queue is EMPTY\n");
    } 
	else 
	{
        printf("Queue elements are: ");
        for (i = front; i != rear; i = (i + 1) % max) 
		{
            printf("%d ", q[i]);
        }
        printf("%d\n", q[i]);
    }
}

int main() 
{
    int ch;
    while (1) 
	{
        printf("Enter 1 for insertion\n2 for deletion\n3 for display\n4 for exit\n");
        scanf("%d", &ch);
        switch (ch) 
		{
            case 1: insertion(); break;
            case 2: deletion(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice, please enter a valid option.\n");
        }
    }
    return 0;
}
/*
	OUTPUT:
			Enter 1 for insertion
			2 for deletion
			3 for display
			4 for exit
			1
			Enter element: 10
			Enter 1 for insertion
			2 for deletion
			3 for display
			4 for exit
			1
			Enter element: 20
			Enter 1 for insertion
			2 for deletion
			3 for display
			4 for exit
			3
			Queue elements are: 10 20
			Enter 1 for insertion
			2 for deletion
			3 for display
			4 for exit
			2
			Deleted element is 10
			Enter 1 for insertion
			2 for deletion
			3 for display
			4 for exit
			1
			Enter element: 40
			Enter 1 for insertion
			2 for deletion
			3 for display
			4 for exit
			1
			Enter element: 30
			Enter 1 for insertion
			2 for deletion
			3 for display
			4 for exit
			3
		Queue elements are: 20 40 30
		Enter 1 for insertion
		2 for deletion
		3 for display
		4 for exit
		2
		Deleted element is 20
		Enter 1 for insertion
		2 for deletion
		3 for display
		4 for exit
		2
		Deleted element is 40
		Enter 1 for insertion
		2 for deletion
		3 for display
		4 for exit
		2		
		Deleted element is 30
		Enter 1 for insertion
		2 for deletion
		3 for display
		4 for exit
		3
		Queue is EMPTY
		Enter 1 for insertion
		2 for deletion
		3 for display
		4 for exit
		4
*/
