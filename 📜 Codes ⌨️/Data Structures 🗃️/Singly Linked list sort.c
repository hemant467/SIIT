/*Singly Linked list & sort it using Insertion sort algorithm*/
#include <stdio.h>
#include <stdlib.h>

//Node structure
struct Node
{
	int data;			//Data field
	struct Node* next;	//Pointer to the next node
};

//Function to create a new node
struct Node* createNode(int data)	//Allocate memory for a new node
{
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));		//Initialize the new node with the provided data
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//Function to insert a new node at the END of the list
void insertEnd(struct Node** head,int data)
{
	struct Node* newNode=createNode(data);
	if (*head==NULL)	//If the list is empty, make the new node head
	{
		*head=newNode;
		return;
	}
	//Traverse to the end of the list
	struct Node* temp=*head;
	while(temp->next !=NULL)
	{
		temp=temp->next;
	}
	//Insert new node at the end
	temp->next=newNode;
}

//Function to print the Linked list
void printList(struct Node* head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
	
}

//Function to sort the Linked list using Insertion sort
void insertionSort(struct Node** head)
{
	struct Node* sorted= NULL;	//Initialize sorted list is EMPTY
	struct Node* current= *head;	//Traverse the given linked list & insert every node to sorted
	while(current!=NULL)
	{
		struct Node* next=current->next;	//Store next for the next iteration
		if(sorted == NULL || sorted->data >= current->data)		//If sorted list is EMPTY or current node should be inserted befor the first node
		{
			current->next = sorted;
			sorted = current;
		}
		else
		{
			struct Node* temp=sorted;	//Locate the node before the point of insertion
			while(temp->next !=NULL && temp->next->data < current->data)
			{
				temp=temp->next;
			}
			current->next=temp->next;
			temp->next=current;
		}
		current=next;
	}
	*head=sorted;	//Update head to point to sorted Linked list
}

int main()
{
	struct Node* head=NULL;	//Initialize the head of the linked list as NULL
	int n,data,i;
	
	printf("Enter the number of elements to be sorted: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)	//Insert elements into the linked list
	{
		printf("Enter elemnet %d: ",i+1);
		scanf("%d",&data);
		insertEnd(&head, data);
	}
	
	printf("\nOriginal List: ");
	printList(head);	//Printf the original list
	
	insertionSort(&head);	//Sort the linked list
	
	printf("\nSorted List: ");
	printList(head);	//Print the sorted list
}

/*
	OUTPUT
			Enter the number of elements to be sorted: 5
			Enter elemnet 1: 10
			Enter elemnet 2: 4
			Enter elemnet 3: 6
			Enter elemnet 4: 9
			Enter elemnet 5: 5

			Original List: 10 4 6 9 5
			
			Sorted List: 4 5 6 9 10
*/
