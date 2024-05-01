/*Given an array prices[] of length N, representing the prices of the stocks on different days, the task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed.

Note: Stock must be bought before being sold*/

#include <stdio.h>

int MaxProfit(int Price[],int N){
    int min;
    int maxProfit=0;
    min=Price[0];
    for(int i=0;i<N;i++){
        if(min>Price[i]){
            min=Price[i];
        }
        if(max<Price[i]&&i>minindex){
            maxindex=i;
            max=Price[i];
        }
    }
    
}
int main()
{
    
    return 0;
}