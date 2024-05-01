/*Given an array A[] of n numbers and another number x, the task is to check whether or not there exist two elements in A[] whose sum is exactly x. */
#include <stdio.h>
int SumCheck(int array[],int x,int size){
    int flag=0;
    for(int i=0;i<size-1;i++){
        for(int j=i;j<size;j++){
            if(array[i]+array[j]==x){
                flag=1;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    if(SumCheck(array,190,10))
    printf("\nThe pair of elements exist in the array whose sum is x\n");
    else
    printf("\nThere is no pair of element in the array whose sum is x\n");
    return 0;
}