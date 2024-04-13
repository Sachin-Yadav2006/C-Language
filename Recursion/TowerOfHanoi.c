// We are given three rods say A,B and C . There are some disks in the rod A(no two disks are of same size and largest disk is on the bottom and smallest at the top and nowhere in the between we have any larger disk over the smaller one) , we are required to move all those disks in the disk C with the following constraints.
// We cannot place a disk of larger size over the disk of smaller size.
// We can only move only one disk at a time.
//  We are required to count the number of moves required to move all the disks (say n) from the rod A to the rod C .
//  For example when there is only one disk in A we require one move to transfer it to C.
// When we have two disks in A then we require 3 moves (first we move smaller one to B then we move larger one to C and then the smaller one to C ) to transfer all the disks to C.

// Solution//
// In general when we have n disks then we are to tranfer first n-1 disks to rod B then transfer last disk to rod C (as disks are already in the increasing order i.e. larger at the bottom and smallest at the top) and then again transfer n-1 disks to the rod C.
// So totally we require 2*(n-1)+1 moves to transfer n disks.

#include <stdio.h>

int TowerOfHanoi(int n)
{
    if (n == 1)
        return 1;
    else
        return 2 * TowerOfHanoi(n - 1) + 1;
}


int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    int moves;
    moves=TowerOfHanoi(n);
    printf("The number of moves required to transfer all the disk from the disk A to disk C is %d",moves);
}