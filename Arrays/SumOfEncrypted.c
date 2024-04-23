/*You are given an integer array nums containing positive integers. We define a function encrypt such that encrypt(x) replaces every digit in x with the largest digit in x. For example, encrypt(523) = 555 and encrypt(213) = 333.

Return the sum of encrypted elements.*/
#include <stdio.h>

int Encrypt(int x);

int sumOfEncryptedInt(int *nums, int numsSize)
{
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        sum += Encrypt(nums[i]);
    }
    return sum;
}

int Encrypt(int x)
{
    int count = 0;
    int max = 0;
    while (x != 0)
    {
        count++;
        if (max < (x % 10))
            max = x % 10;
        x = x / 10;
    }
    printf("Max=%d\n",max);
    int number = 0;
    while (count != 0)
    {
        number = number * 10 + max;
        printf("Number now is %d\n",number);
        count--;
    }
    printf("%d\n",number);
    return number;
}

int main()
{
    int nums[] = {10, 21, 31};
    printf("The sum of the encrypted number is %d", sumOfEncryptedInt(nums, 3));
    return 0;
}