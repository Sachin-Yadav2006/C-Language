# include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertionSortAsc(int array[],int size){
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j=j-1;
        }
    array[j+1]=key;
    }
}
int main(){
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int i;
    int array[size];
    for(i=0;i<size;i++)
    {
        array[i]=(rand()%(100000-9999+1)+9999);
    }
    clock_t start, end;
    start=clock();
    insertionSortAsc(array, size);
    end=clock();
    double time;
    time=(end-start)/CLOCKS_PER_SEC;
    // printf("\nThe sorted array is : \n");
    // for(i=0;i<size;i++)
    // {
    //     printf("%d ", array[i]);
    // }
    printf("The running time of the algorithm is %lf",time);
    return 0;
}