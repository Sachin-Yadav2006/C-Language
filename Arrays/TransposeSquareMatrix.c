// Function to return the transpose of a square matrix without using another matrix

#include <stdio.h>

void Transpose(int size,int array[][size])
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size/2+1; j++)
        {
            temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }
}
int main()
{
    int size;
    printf("Enter the size of the matrix\n");
    scanf("%d", &size);
    int array[size][size];

    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("Enter the element at the index (%d,%d): ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

     // Printing the original matrix
    printf("The original matrix is \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    Transpose(size,array);

    //Printing the transpose matrix
    printf("The transpose of the entered array is \n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}