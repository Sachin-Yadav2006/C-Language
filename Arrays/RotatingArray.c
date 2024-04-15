// Rotate an array by k steps where k can be greater than the size of the array

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array");
    scanf("%d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d the element of the array\n", i + 1);
        scanf("%d", &array[i]);
    }

    int k;
    printf("Enter the value of the k:");
    scanf("%d", &k);

    // After rotating the array k=size times the array formed becomes equal to the original arrays
    k = k % size;
    int key;

    for (int j = 0; j < k; j++)
    {
        key = array[size-1];
        for (int l = size - 1; l > 0; l--)
        {
            array[l] = array[l - 1];
        }
        array[0] = key;
    }

    // Printing the array formed after rotating
    printf("The array formed after rotating the array is \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}