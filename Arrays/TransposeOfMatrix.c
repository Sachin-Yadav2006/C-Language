// Program to print the transpose of a matrix entered by the user.

#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d%d", &m, &n);
    int array[m][n];

    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the element at the index (%d,%d): ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    // Printing the original matrix
    printf("The original matrix is \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Creating the transpose matrix
    int Transpose_2D_Matrix[n][m];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            Transpose_2D_Matrix[j][i] = array[i][j];
        }
    }

    // Printing the transpose of the Array
    printf("The transpose of the entered array is \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", Transpose_2D_Matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}