#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void AscSort(int array[],int size){
    int i,j,temp;
    for(i=1;i<size;i++){
        for(j=0;j<i;j++)
        {
            if(array[i]<array[j])
            {
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
}
int main(){
    int sz=16;
    // printf("Enter the size of the array:");
    // scanf("%d",&sz);
    int array[]={9,8,7,6,5,4,3,2,1,0,89,1000,456777887,778766554,123456,98765};
    // int i;
    // for(i=0;i<sz;i++)
    // {
    //     array[i]=((rand()%90002)+9999);
    // }
    clock_t start,end;
    double time;
    start=clock();
    //Sorting the array
    AscSort(array,sz);
    end=clock();
    time=(end-start)/CLOCKS_PER_SEC;
    printf("The sorted array is :\n");
    int j;
    for(j=0;j<sz;j++)
    {
        printf("%d ",array[j]);
    }
    printf("\nThe running time of the algorithm is %lf",time);
    return 0;
}