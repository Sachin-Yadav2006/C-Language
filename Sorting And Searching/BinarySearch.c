#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include "SelectionSort.c"
int binarySearch(int array[],int size,int key){
    int n,start=0,end=size-1;
    
    while(start<=end){
        n=(start+end)/2;
        if(array[n]==key){
            return n;
        }
        else if(array[n]<key){
            start=n+1;
    
        }
        else{
            end=n-1;
        }
    }
    return -1;
}
int main(){
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        array[i]=((rand()%100000-9999+1)+9999);
    }
    //selectionSortAsc(array,size);          //To sort the array using Selection Sorting Technique
    int key;
    printf("Enter the element to be searched for:");
    scanf("%d",&key);
    clock_t start,end;
    double time;
    start=clock();
    int index=binarySearch(array,size,key);
    end=clock();
    time=(end-start)/CLOCKS_PER_SEC;
    (index==-1)?printf("\nThe Key Element not found!"):printf("\nThe Key Element found at index %d",index);
    printf("The running time of the algorithm is %lf",time);
    return 0;
}