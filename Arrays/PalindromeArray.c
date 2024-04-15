// To find if an array is palindrome or not.

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

    int flag = 1;
    for (int i = 0; i < size / 2; i++)
    {
        if (array[i] != array[size - i - 1])
        {
            flag = 0;
            break;
        }
    }

    switch (flag)
    {
    case 0:
        printf("The entered array is not palindrome\n");
        break;
    case 1:
        printf("The entered array is palindrome \n");
        break;
    }
    return 0;
}