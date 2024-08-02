/*Double Linked List*/
#include<stdio.h>
#include<stdlib.h>

struct node 
{
    struct node *lptr;   // lptr - Left pointer
    int info;
    struct node *rptr;   // rptr - Right pointer
};

typedef struct node node;
node *head = NULL, *tail = NULL;
node *temp, *newn;  // newn - new node

int size = 0;

void insertion() 
{
    int index, element, i;
    printf("Enter index to insert: ");
    scanf("%d", &index);
    if (index < 0 || index > size) 
	{
        printf("NOT Possible\n");
        return;
    } 
	else 
	{
        printf("Enter element: ");
        scanf("%d", &element);
        newn = (node *)malloc(sizeof(node));
        newn->info = element;
        if (head == NULL)	// Empty list
		{
            newn->lptr = newn->rptr = NULL;
            head = tail = newn;
        } 
		else if (index == 0)	// Insert at the beginning
		{
            newn->lptr = NULL;
            newn->rptr = head;
            head->lptr = newn;
            head = newn;
        } 
		else if (index == size)		// Insert at the end
		{
            newn->rptr = NULL;
            newn->lptr = tail;
            tail->rptr = newn;
            tail = newn;
        } 
		else 
		{  // Insert in the middle
            temp = head;
            for (i = 0; i < index - 1; i++) 
			{
                temp = temp->rptr;
            }
            newn->lptr = temp;
            newn->rptr = temp->rptr;
            temp->rptr->lptr = newn;
            temp->rptr = newn;
        }
        size++;
    }
}

void display1() 
{
    temp = head;
    while (temp != NULL) 
	{
        printf("%d ", temp->info);
        temp = temp->rptr;
    }
    printf("\n");
}

void display2() 
{
    temp = tail;
    while (temp != NULL) 
	{
        printf("%d ", temp->info);
        temp = temp->lptr;
    }
    printf("\n");
}

int main() 
{
    int ch;
    while (1) 
	{
        printf("\nEnter\n1 to insert\n2 to display from head to tail\n3 to display from tail to head\n4 to exit\n");
        scanf("%d", &ch);
        switch (ch) 
		{
            case 1: insertion(); break;
            case 2: display1(); break;
            case 3: display2(); break;
            case 4: exit(0); break;
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}

/*
	OUTPUT:

		Enter
		1 to insert
		2 to display from head to tail
		3 to display from tail to head
		4 to exit
		1
		Enter index to insert: 0
		Enter element: 10

		Enter
		1 to insert
		2 to display from head to tail
		3 to display from tail to head
		4 to exit
		1
		Enter index to insert: 1
		Enter element: 20

		Enter
		1 to insert
		2 to display from head to tail
		3 to display from tail to head
		4 to exit
		1
		Enter index to insert: 0
		Enter element: 5

		Enter
		1 to insert
		2 to display from head to tail
		3 to display from tail to head
		4 to exit
		2
		5 10 20

		Enter
		1 to insert
		2 to display from head to tail
		3 to display from tail to head
		4 to exit
		3
		20 10 5

		Enter
		1 to insert
		2 to display from head to tail
		3 to display from tail to head
		4 to exit
		4
*/
