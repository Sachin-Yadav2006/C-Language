// Problem Statement
// If we can climb one or two stairs at a time then we have to find the number of ways in which we can reach to the nth stair from the ground if we are free to choose whether we want to climb one stair or two stairs at any point of time.
// If we are at the (n-1)th stair then we can climb to the nth stair in only one way
// But if we are at the (n-2)th stair then we can climb the remaining two stairs in two ways either walking two steps one stair each time or walking both the stairs in one step
// So, number of ways of reaching the nth stair is equal to the number of ways of climbing the sum of number of ways of climbing the (n-1)th and (n-2)th stairs.
#include <stdio.h>
int StairClimbWays(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return StairClimbWays(n - 1) + StairClimbWays(n - 2);
}
int main()
{
    int n;
    printf("Enter the number of stairs to climb:");
    scanf("%d", &n);
    int ways;
    ways = StairClimbWays(n);
    printf("The number of ways to climb the entered number of stair is %d", ways);
    return 0;
}