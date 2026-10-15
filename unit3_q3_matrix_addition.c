/* Unit III (2-D Array) - Q3: Perform matrix addition */
#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Resultant matrix (A + B):\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }

    return 0;
}
