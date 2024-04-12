# include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertionSortAsc(int array[],int size){
    int i,j,temp;
    for(i=1;i<size;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
            else{
                break;
            }
        }
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
    insertionSortAsc(array,size);
    end=clock();
    time=(end-start)/CLOCKS_PER_SEC;
    //printf("\nThe sorted array is \n");
    // for(i=0;i<size;i++)
    // {
    //     printf("%d ",array[i]);
    // }
    printf("\nThe runtime of the algorithm is : %lf",time);
    return 0;
}