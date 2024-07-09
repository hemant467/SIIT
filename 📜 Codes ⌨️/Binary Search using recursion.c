/*Binary Search
Searching an element using recursion*/
#include<stdio.h>

int binary_search(int a[], int low, int high, int key);

int main()
{
    int i, n, a[20], key, pos;
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    printf("Enter elements in sorted array: ");
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]);

    printf("Enter search element: ");
    scanf("%d", &key);

    pos = binary_search(a, 0, n-1, key);

    if(pos >= 0)
        printf("Element %d is found at position %d", a[pos], pos + 1);
    else
        printf("Element not found!!!");

    return 0;
}

int binary_search(int a[], int low, int high, int key)
{
    if(low > high)
        return -1;
    else
    {
        int mid = (low + high) / 2;
        if(a[mid] == key)
            return mid;
        else if(key < a[mid])
            return binary_search(a, low, mid - 1, key);
        else
            return binary_search(a, mid + 1, high, key);
    }
}

/*

OUTPUT:

	Enter value of n: 5
	Enter elements in sorted array: 10 20 30 40 50
	Enter search element: 30
	Element 30 is found at position 3
*/
