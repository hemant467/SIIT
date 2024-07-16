/*Merge Sort*/
#include <stdio.h>

void merge_sort(int a[], int l, int h);
void merge(int a[], int l, int m, int h);

// Main function
int main() 
{
    int a[20], i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    merge_sort(a, 0, n - 1);
    printf("Sorted elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}

// Merge sort function
void merge_sort(int a[], int l, int h) 
{
    if (l < h) 
	{
        int m = l + (h - l) / 2;	// Find the middle point
        merge_sort(a, l, m);		// Sort first half
        merge_sort(a, m + 1, h);	// Sort second half
        merge(a, l, m, h);			// Merge the sorted halves
    }
}

// Merge function
void merge(int a[], int l, int m, int h) 
{
    int b[20];
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= h) 
	{
        if (a[i] <= a[j]) 
		{
            b[k] = a[i];
            i++;
        } 
		else 
		{
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= m) 
	{
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= h) 
	{
        b[k] = a[j];
        j++;
        k++;
    }
    for (i = l; i <= h; i++) 
	{
        a[i] = b[i];
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
