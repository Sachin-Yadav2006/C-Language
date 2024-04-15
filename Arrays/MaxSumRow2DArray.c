// Program to print the row having maximum sum of the elements of its row.

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

    int maxSum = 0;
    int rowSum;
    int rowIndex;
    for (i = 0; i < m; i++)
    {
        rowSum = 0;
        for (j = 0; j < n; j++)
        {
            rowSum += array[i][j];
        }
        if (rowSum > maxSum)
        {
            maxSum = rowSum;
            rowIndex = i;
        }
    }

    printf("The row having the maximum sum is %d\n", rowIndex);
    printf("The maximum sum of the row is %d", maxSum);
    return 0;
}