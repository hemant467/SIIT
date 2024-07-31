/*Singly linked list with insertion, deletion, and display functionalities*/
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int info;
    struct node *ptr;
};
typedef struct node node;

node *head = NULL, *temp, *newn; // newn - new node
int size = 0;

void insertion() 
{
    int i, index, element;
    printf("Enter index to insert: ");
    scanf("%d", &index);
    if (index < 0 || index > size) 
	{
        printf("Not possible\n");
    } 
	else 
	{
        newn = (node *)malloc(sizeof(node)); // Allocate memory for the new node
        printf("Enter element: ");
        scanf("%d", &element);
        newn->info = element; // newn - new node
        if (index == 0) 
		{
            newn->ptr = head; // newn - new node
            head = newn;
        } 
		else 
		{
            temp = head;
            for (i = 1; i < index; i++) 
			{
                temp = temp->ptr;
            }
            newn->ptr = temp->ptr; // newn - new node
            temp->ptr = newn;
        }
        size++;
    }
}

void deletion() 
{
    int i, index;
    printf("Enter index to delete: ");
    scanf("%d", &index);
    if (index < 0 || index >= size) 
	{
        printf("Not possible\n");
    } 
	else 
	{
        node *del;
        if (index == 0) 
		{
            del = head;
            head = head->ptr;
        } 
		else 
		{
            temp = head;
            for (i = 1; i < index; i++) 
			{
                temp = temp->ptr;
            }
            del = temp->ptr;
            temp->ptr = del->ptr;
        }
        free(del);
        size--;
    }
}

void display() 
{
    temp = head;
    while (temp != NULL) 
	{
        printf("%d ", temp->info); // temp->info = stores value
        temp = temp->ptr;          // temp->ptr  = stores value of address
    }
    printf("\n");
}

int main() 
{
    int ch;
    while (1) 
	{
        printf("Enter \n1 to insert\n2 to delete\n3 to display\n4 to exit\n");
        scanf("%d", &ch);
        switch (ch) 
		{
            case 1:
                insertion();
                break;
            case 2:
                deletion();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

/*
	OUTPUT:

			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			2
			Enter index to delete: 4
			Not possible
			
			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			1
			Enter index to insert: 5
			Not possible

			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			1
			Enter index to insert: 0
			Enter element: 30
			
			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			1
			Enter index to insert: 1
			Enter element: 50

			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			3
			30 50

			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			1
			Enter index to insert: 0
			Enter element: 10

			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			3
			10 30 50

			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			1
			Enter index to insert: 2
			Enter element: 40

			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			3
			10 30 40 50
			
			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			1
			Enter index to insert: 1
			Enter element: 20
			
			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			3
			10 20 30 40 50

			Enter
			1 to insert
			2 to delete
			3 to display
			4 to exit
			4
*/
