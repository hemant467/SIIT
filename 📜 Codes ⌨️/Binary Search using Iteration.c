/*Binary Search
Searching an element using iteration*/
#include<stdio.h>

int binary_search(int a[], int n, int key);

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

    pos = binary_search(a, n, key);

    if(pos >= 0)
        printf("Element %d is found at position %d", a[pos], pos + 1);
    else
        printf("Element not found!!!");

    return 0;
}

int binary_search(int a[], int n, int key)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
    	mid=(low+high)/2;
    	if(a[mid]==key)
    	return mid;
    	else if(key<a[mid])
    	high=mid-1;
    	else
    	low=mid+1;
	}
	return -1;
}
/*

OUTPUT:

	Enter value of n: 5
	Enter elements in sorted array: 40 50 60 70 80
	Enter search element: 60
	Element 60 is found at position 3
*/
