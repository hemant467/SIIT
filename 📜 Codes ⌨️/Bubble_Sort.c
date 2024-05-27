#include <stdio.h>

// Function to perform bubble sort
void bubble_sort(int a[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
	{
        for (j = 0; j < n - i - 1; j++) 
		{
            if (a[j] > a[j + 1]) 
			{
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int a[], int n) 
{
    int i;
    for (i = 0; i < n; i++) 
	{
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() 
{
    int arr[20], n, i;

    // Taking input for the number of elements
    printf("Enter value of n: ");
    scanf("%d", &n);

    // Taking input for the elements
    printf("Enter numbers: \n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    bubble_sort(arr, n);

    // Printing the sorted array
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}

