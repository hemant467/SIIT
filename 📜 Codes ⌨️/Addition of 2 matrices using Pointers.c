/*Double dimensional array
Addition of 2 matrices
Using Pointers*/

int main() {
    int a[100][100], b[100][100], c[100][100], *p, *q, *r;
    int i, j, r1, c1;

    printf("Enter number of rows (between 1 and 100): ");
    scanf("%d", &r1);
    printf("Enter number of columns (between 1 and 100): ");
    scanf("%d", &c1);

    printf("\nEnter matrix A:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", (a[i] + j));

    printf("\nEnter matrix B:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", (b[i] + j));

    p = &a[0][0];
    q = &b[0][0];
    r = &c[0][0];

    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            *(r + i * c1 + j) = *(p + i * c1 + j) + *(q + i * c1 + j);	// Accessing and summing elements at (i, j) and storing in matrix C

    printf("\nSum of two matrices: \n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++) 
		{
            printf("%d  ", *(r + i * c1 + j));
            if (j == c1 - 1) 
			{
                printf("\n");
            }
        }
}
