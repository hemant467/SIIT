/*Double ended queue*/
#include<stdio.h>
#define max 5
int q[max],front=-1,rear=-1;
void insertf()	//insertf()=insert front
{
	int element;
	int i;
	if(front==0&&rear==max-1)
	{
		printf("Queue is FULL");
	}
	else
	{
		printf("Enter element: ");
		scanf("%d",&element);
		if(front==-1)
		front=rear=0;
		else if(front>0)
		front--;
		else
		{
			for(i=rear;i>=front;i--)
			{
				q[i+1]=q[i];
			}
			rear++;
		}
		q[front]=element;
	}
}

void insertr()	//insertr()=insert rear
{
	int element;
	int i;
	if(rear==max-1&&front==0)
	{
		printf("Queue is FULL");
	}
	else
	{
		printf("Enter element: ");
		scanf("%d",&element);
		if(front==-1)
		{
			front=rear=0;
			q[rear]=element;
		}
		else if(rear<max-1)
		{
			rear++;
			q[rear]=element;
		}
		else
		{
			for(i=front;i<=rear;i++)
			{
				q[i-1]=q[i];
				q[rear]=element;
			}
			front--;
		}
	}
}
void deletef()	//deletef()=delete front
{
	if(front==-1)
	{
		printf("EMPTY");
	}
	else
	{
		if(front==rear)
		{
			printf("Deleted element is %d",q[front]);
			front=rear=-1;
		}
		else
		{
			printf("Deleted element is %d",q[front]);
			front=front+1;
		}
	}
}
void deleter()	//deleter()=delete rear
{
	if(front==-1)
	{
		printf("EMPTY");
	}
	else
	{
		if(front==rear)
		{
			printf("Deleted element is %d",q[front]);
			front=rear=-1;
		}
		else if(rear==0)
		{
			printf("Deleted element is %d",q[rear]);
			rear=max-1;
		}
		else
		{
			printf("Deleted element is %d",q[rear]);
			rear=rear-1;
		}
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	printf("%d ",q[i]);
}
void main()
{
	int ch;
	while(1)
	{
		printf("Enter \n1 to insert front\n2 to insert from rear\n3 to delete from front\n4 to delete from from rear\n5 to display\n6 to EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insertf();
			break;
			case 2:insertr();
			break;
			case 3:deletef();
			break;
			case 4:deleter();
			break;
			case 5:display();
			break;
			case 6:exit(0);
			default:printf("INVALID CHOICE");
		}
	}
}

/*OUTPUT:

Enter
1 to insert front
2 to insert from rear
3 to delete from front
4 to delete from from rear
5 to display
6 to EXIT
1
Enter element: 10
Enter
1 to insert front
2 to insert from rear
3 to delete from front
4 to delete from from rear
5 to display
6 to EXIT
2
Enter element: 20
Enter
1 to insert front
2 to insert from rear
3 to delete from front
4 to delete from from rear
5 to display
6 to EXIT
5
10 20 Enter
1 to insert front
2 to insert from rear
3 to delete from front
4 to delete from from rear
5 to display
6 to EXIT
1
Enter element: 30
Enter
1 to insert front
2 to insert from rear
3 to delete from front
4 to delete from from rear
5 to display
6 to EXIT
5
30 10 20 Enter
1 to insert front
2 to insert from rear
3 to delete from front
4 to delete from from rear
5 to display
6 to EXIT
2
Enter element: 40
Enter
1 to insert front
2 to insert from rear
3 to delete from front
4 to delete from from rear
5 to display
6 to EXIT
5
30 10 20 40 Enter
1 to insert front
2 to insert from rear
3 to delete from front
4 to delete from from rear
5 to display
6 to EXIT
5
30 10 20 40 Enter
1 to insert front
2 to insert from rear
3 to delete from front
4 to delete from from rear
5 to display
6 to EXIT
6
*/
