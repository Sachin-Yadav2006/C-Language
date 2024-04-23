/*You are given a 0-indexed integer array nums of size 3 which can form the sides of a triangle.

A triangle is called equilateral if it has all sides of equal length.
A triangle is called isosceles if it has exactly two sides of equal length.
A triangle is called scalene if all its sides are of different lengths.
Return a string representing the type of triangle that can be formed or "none" if it cannot form a triangle.*/
#include <stdio.h>
char *triangleType(int *nums, int numsSize)
{
    int flag = 1;
    if (nums[0] >= nums[1] + nums[2])
        flag = 0;
    else if (nums[1] >= nums[0] + nums[2])
        flag = 0;
    else if (nums[2] >= nums[0] + nums[1])
        flag = 0;
    if (flag == 0)
    {
        return "none";
    }
    else
    {
        if (nums[1] == nums[0] && nums[1] == nums[2])
        {
            return "equilateral";
        }
        else if (nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2])
        {
            return "isosceles";
        }
        else
        {
            return "scalene";
        }
    }
}
int main()
{
    int nums[]={3,4,5};
    printf("The triangle is %s",triangleType(nums,3));
    return 0;
}