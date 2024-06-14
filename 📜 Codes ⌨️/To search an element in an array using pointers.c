//To search an element in an array using pointers

main() 
{
    int a[100], size, i, find, *p, found = 0;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    p = a; // Point p to the start of the array

    printf("Enter elements: ");
    for (i = 0; i < size; i++) 
        scanf("%d", p + i); // Use pointer arithmetic to access array elements

    printf("Enter the element to be searched: ");
    scanf("%d", &find);

    for (i = 0; i < size; i++) 
        if (*(p + i) == find) 
		{ // Use pointer arithmetic to compare elements
            found = 1;
            break;
        }

    if (found == 1) 
	{
        printf("%d is found at position %d\n", find, i + 1);
        printf("%d is found at index position %d\n", find, i);
    } 
	else 
        printf("%d is not present", find);
}
