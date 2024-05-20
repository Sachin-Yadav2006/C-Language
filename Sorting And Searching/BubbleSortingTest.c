// TEST
// SET 03
// Question 2
// Implement Bubble Sorting Algorithm

#include <stdio.h>

// Function to sort the array using the bubble sorting algorithm
void BubbleSortAscending(int array[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    { // At each iteration of the loop one maximum element of the left elements of array would be positioned at its right place.
        for (int j = 0; j < (size - i); j++)
        {
            if (array[j] > array[j + 1])
            {                            // Swapping if the adjacent elements are not in the Ascending Order
                temp = array[j];         // Storing the value of the jth element of the array in a temporary variable to use it ahead
                array[j] = array[j + 1]; // Swapping the values
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter the size of the array :\n\n");
    scanf("%d", &size);
    int array[size]; // Creation of the array
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d th element of the array ", i + 1);
        scanf("%d", &array[i]);
    }

    // Printing the Actual Array
    printf("\nThe elements of the actual array are : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    // Calling the sorting function

    BubbleSortAscending(array, size);

    // Printing the array after sorting
    printf("\nThe array after sorting is : \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}