//Problem Statement
//When we are given a set of rectangles like one in the graph paper we have to go from one grid of rectangle at the corner of the rectangle to the other corner considering that you can only go down or right and you would always go one rectangle in each step. Now find the number of ways in which we can go there.
//The input would  be m and n where the rectangle would be of m X n.
//Considering the problem as a recurrence relation we find that when we go one step down then we are left with the problem of the same type but with (n-1) X m. 
//Similarly when we go one step right then we are left with the problem of n X m-1.
//When we have the maze of order n X 1 or of the order 1 X m then are left with only one way.
#include <stdio.h>
int MazePathWays(int m,int n){
    if(m==1||n==1){
        return 1;
    }
    else{
        return MazePathWays(m-1,n)+MazePathWays(m,n-1);
    }
}
int main(){
    int m,n;
    printf("Enter the number of rows and columns in the maze\n");
    scanf("%d%d",&m,&n);
    int ways;
    ways=MazePathWays(m,n);
    printf("The number of ways for the entered order maze is %d",ways);
}