#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertionSortAscd(int arr[],int n){
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
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
    insertionSortAscd(array, size);
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