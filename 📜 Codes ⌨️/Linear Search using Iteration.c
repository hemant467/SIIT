/*Linear Search
Searching an element using iteration*/
#include<stdio.h>

int linear_search(int a[], int n, int key);

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

    pos = linear_search(a, n, key);

    if(pos >= 0)
        printf("Element %d is found at position %d", a[pos], pos + 1);
    else
        printf("Element not found!!!");

    return 0;
}

int linear_search(int a[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++) 
        if(a[i] == key)
            return i;
    return -1;
}
/*

OUTPUT:

	Enter value of n: 5
	Enter elements: 20 50 80 110 140
	Enter search element: 110
	Element 110 is found at position 4
*/
