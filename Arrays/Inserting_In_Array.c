#include <stdio.h>

int main()
{
    // Creating an Array in which the element is to be further added considering that we have enough space for the insertion of the element in the array
    int array[10] = {11, 12, 13, 14, 15, 16}; // Array have only six elements
    int element, index;
    printf("Enter the element to be added: \n");
    scanf("%d", &element);
    printf("Enter the index at which the element is to be added:");
    scanf("%d", &index);
    int size, i;
    size = sizeof(array) / sizeof(int);
    printf("The size of the array is %d\n", size);
    printf("The elements of the array before insertion are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    for (i = size - 1; i > index; i--)
    {
        array[i] = array[i - 1];
    }
    if (index <= size)
    {
        array[index] = element;
    }
    // Printing the Array
    printf("The elements of the array after insertion are:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}