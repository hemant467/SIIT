/*Linear Search
Searching an element using recursion*/
#include<stdio.h>

int linear_search(int a[], int i, int n, int key);

int main()
{
    int i, n, a[20], key, pos;
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]);

    printf("Enter search element: ");
    scanf("%d", &key);

    pos = linear_search(a, 0, n, key);

    if(pos >= 0)
        printf("Element %d is found at position %d", a[pos], pos + 1);
    else
        printf("Element not found!!!");

    return 0;
}

int linear_search(int a[], int i, int n, int key)
{
    if(i == n)
        return -1;
    else if(a[i] == key)
        return i;
    else
        return linear_search(a, i + 1, n, key);
}

/*

OUTPUT:

	Enter value of n: 5
	Enter elements: 10 20 30 40 50
	Enter search element: 30
	Element 30 is found at position 3
*/
