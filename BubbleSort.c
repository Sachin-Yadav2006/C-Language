#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void bubblesortasc(int array[],int size){
    int i,j;
    int temp;
    for(i=0;i<size-1;i++){
        for(j=0;j<(size-i);j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
int main(){
    int sz;
    printf("Enter the size of the array:");
    scanf("%d",&sz);
    int array[sz];
    int k;
    for(k=0;k<sz;k++)
    {
        array[k]=(rand()%(100000-9999+1)+9999);
    }
    clock_t start, end;
    double time;
    start=clock();
    bubblesortasc(array,sz);
    end=clock();
    time=(end-start)/CLOCKS_PER_SEC;
    //int i;
    // printf("The elements of the sorted array are: \n");
    // for(i=0;i<sz;i++){
    //     printf("%d ",array[i]);
    // }
    printf("The running time of the program is %lf\n",time);
}