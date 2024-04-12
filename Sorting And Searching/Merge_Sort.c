#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Merging_Two_Arrays.c"
void mergeSort(int array[],int start,int end){
    unsigned mid;
    if(start<end){
        mid=(start+end)/2+1;
        mergeSort(array,start,mid-1);
        mergeSort(array,mid,end);
        merge(array,start,mid,end);
    }
}
int main(){
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int array[size];
    int i;
    for(i=0;i<size;i++)
    {
        array[i]=(rand()%(100000-9999+1)+9999);
    }
    clock_t start,end;
    double time;
    start=clock();
    mergeSort(array,0,size-1);
    end=clock();
    time=(end-start)/CLOCKS_PER_SEC;
    printf("\nThe sorted array is \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nThe runtime of the algorithm is : %lf",time);
    return 0;
}