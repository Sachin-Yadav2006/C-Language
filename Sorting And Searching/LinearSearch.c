#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int linearSearch(int array[],int size,int key)
{
    int i; 
    for(i=0;i<size;i++)
    {
        if(array[i]==key)
        return i;
    }
    return -1;
}
int main()
{
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        array[i]=(rand()%(100000-9999+1))+9999;
    }
    int key;
    printf("Enter the element to be searched for:");
    scanf("%d",&key);
    clock_t start,end;
    start=clock();
    double time;
    int index=linearSearch(array,size,key);
    end=clock();
    time=(end-start)/CLOCKS_PER_SEC;
    // printf("The array is : \n");
    // for(int i=0;i<size;i++)
    // {
    //     printf("%d ",array[i]);
    // }
    (index==-1)?printf("The element not found!"):printf("The element found at index %d ",index);
    printf("\nThe running time of the function is %lf",time);
    return 0;
}