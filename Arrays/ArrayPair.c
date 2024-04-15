// Find the total number of pairs in the array whose sum is equal to  a number x.

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

    int x;
    printf("Enter the number x :");
    scanf("%d", &x);
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[i] + array[j] == x)
            {
                count += 1;
            }
        }
    }

    printf("The number of pairs having the sum x is %d", count / 2);
    return 0;
}