#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// Definition of the function to sort the elements of the array in Ascending Order
void selectionSortAsc(int array[], int size)
{
    int i, j, temp, min_index;
    for (i = 0; i < size - 1; i++)
    {
        min_index = i;             // Considering the ith element to be the minimum element
        for (j = i; j < size; j++) // Fix one smallest element of the remained element at the right position each time
        {
            if (array[j] < array[min_index]) // Comparing the element with the previously assigned minimum element
            {
                min_index = j; // Updating the index of the minimum element
            }
        }
        // Swapping the position of the minimum element
        temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}
int main()
{
    int sz;
    printf("Enter the size of the array:");
    scanf("%d", &sz); // Taking the size of the array as input
    printf("The size of the array you entered is %d\n", sz);
    int array[sz]; // Initialising the array of the size entered
    printf("The array of the size entered is created successfully.\n");
    int i;
    for (i = 0; i < sz; i++)
    {
        array[i] = ((rand() % (100000 - 9999 + 1)) + 9999);
    }
    clock_t start, end;                    // variables to measure clock speed
    double time;                           // variable to store the time taken in seconds
    start = clock();                       // clock started
    selectionSortAsc(array, sz);           // calling the function
    end = clock();                         // clock ended
    time = (end - start) / CLOCKS_PER_SEC; // time calculated
    printf("The sorted array is:\n");
    int j;
    for (j = 0; j < sz; j++)
    {
        printf("%d ", array[j]);
    }
    // Printing the time taken to run the function of sorting
    printf("\nThe running time of the algorithm is : %lf", time);
}