// Problem Statement
// We can climb one stair, two stairs or three stairs at a time then we are required to find out the number of ways in which we can climb the upto the nth stair
// If we are at the ground then we can either climb one step or two step or three steps
// Breaking the problem into same type of problem of smaller size we got that we can climb the nth stair in climbing the (n-1)th stair+(n-2)th stair + (n-3)th stair for each corresponding chances written above i.e. if we climbed one stair in a step from the ground then we are left with climbing of (n-1) ways or if we climbed 2 stairs then we are left with climbing of (n-2) stairs or similarly when we climbed three stairs in one step from the ground then we are left to climb (n-3) stairs.
// so  climbing n stairs = climbing (n-1)+(n-2)+(n-3) stairs.
#include <stdio.h>
int WaysStairs(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else if (n == 3)
        return 4;
    else
        return WaysStairs(n - 1) + WaysStairs(n - 2) + WaysStairs(n - 3);
}
int main()
{
    int n;
    printf("Enter the number of stairs to be climbed:");
    scanf("%d",&n);
    int ways;
    ways=WaysStairs(n);
    printf("The number of ways of climbing the entered number of stairs is %d",ways); 
    return 0;
}

