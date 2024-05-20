#include <stdio.h>
#include <stdlib.h>

//Function of Insertion Sort to arrange the elements of the array in descending order
void insertionSortDesc(int array[],int size){
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key=array[i];           //key is the element to be placed
        j=i-1;
        while(j>=0 && array[j]<key){
            array[j+1]=array[j];
            j=j-1;
        }
    array[j+1]=key;                 
    }
}


int main(){
    //Creating the array
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int i;
    int array[size];
    printf("Enter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    
    //Printing the actual array
    printf("\nThe actual array is : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ", array[i]);
    }

    //sorting the array
    insertionSortDesc(array, size);
    
    //printing the sorted array
    printf("\nThe sorted array is : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}