/*Quick Sort*/
#include <stdio.h>

// Function prototype
void quick_sort(int a[], int l, int h);

// Main function
int main() 
{
    int a[20], i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quick_sort(a, 0, n - 1);
    printf("Sorted elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

// Quick sort function
void quick_sort(int a[], int l, int h) 
{
    int i, j, p, temp;
    if (l < h) 
	{
        p = l;    // Pivot is the first element
        i = l;
        j = h;
        while (i < j) 
		{
            while (a[i] <= a[p] && i < h) // Move i to the right
                i++;
            while (a[j] > a[p])           // Move j to the left
                j--;
            if (i < j) {  // Swap elements at i and j
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        // Swap pivot element with element at j
        temp = a[p];
        a[p] = a[j];
        a[j] = temp;
        // Recursively sort the subarrays
        quick_sort(a, l, j - 1);
        quick_sort(a, j + 1, h);
    }
}

/*
	OUTPUT:
		Enter n: 10
		Enter elements: 10 4 1 9 3 8 2 6 5 7
		Sorted elements: 1 2 3 4 5 6 7 8 9 10

		Enter n: 10
		Enter elements: 100 40 10 90 30 80 20 60 50 70
		Sorted elements: 10 20 30 40 50 60 70 80 90 100
*/
