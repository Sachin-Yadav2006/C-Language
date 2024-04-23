/*An integer divisible by the sum of its digits is said to be a Harshad number. You are given an integer x. Return the sum of the digits of x if x is a Harshad number, otherwise, return -1.*/
#include <stdio.h>
int sumOfTheDigitsOfHarshadNumber(int x)
{
    int sum = 0;
    int y = x;
    while (y != 0)
    {
        sum += y % 10;
        y = y / 10;
    }
    if (x % sum == 0)
    {
        return sum;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int x = 23;
    int y = sumOfTheDigitsOfHarshadNumber(x);
    printf("The sum of the digits of the Harshad number is %d", y);
}