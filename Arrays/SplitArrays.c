#include <stdio.h>
#include <stdbool.h>
// You are given an integer array nums of even length. You have to split the array into two parts nums1 and nums2 such that:

// nums1.length == nums2.length == nums.length / 2.
// nums1 should contain distinct elements.
// nums2 should also contain distinct elements.
// Return true if it is possible to split the array, and false otherwise.
bool isPossibleToSplit(int *nums, int numsSize)
{
    int count;
    int flag = 1;
    for (int i = 0; i < numsSize; i++)
    {
        count = 0;
        for (int j = i; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count > 2)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        return true;
    else
        return false;
}
int main()
{
    int nums[] = {1, 1, 2, 2, 3, 4, 3, 3};
    int value = isPossibleToSplit(nums, 8);
    printf("%d", value);
}