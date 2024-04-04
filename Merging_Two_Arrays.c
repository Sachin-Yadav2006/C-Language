#include <stdio.h>
#include <stdlib.h>
void merge(int array[],int start,int mid,int end){
    int* temp1=(int*) malloc((mid-start)*sizeof(int));
    int* temp2=(int *) malloc((end-mid+1)*sizeof(int));
    int i;
    for(i=start;i<mid;i++){
        temp1[i-start]=array[i];
    }
    for(i=mid;i<=end;i++){
        temp2[i-mid]=array[i];
    }
    int j=0,k=0;
    i=start;
    while(j<(mid-start) && k<(end-mid+1)){
         if(temp1[j]<=temp2[k]){
            array[i]=temp1[j];
            j=j+1;
            i+=1;
            }
            else{
                array[i]=temp2[k];
                k+=1;
                i+=1;
            }
    }
    if(k<(end-mid+1)){
        for(k;k<=end-mid;k++){
            array[i]=temp2[k];
            i+=1;
        }
    }
    else if(j<mid-start){
        for(j;j<mid-start;j++){
            array[i]=temp1[j];
            i+=1;
        }
    }
    //free(temp1);
    //free(temp2);
}
// int main(){
//     int array[]={10,11,12,13,3,5,6,70,80};
//     int length=sizeof(array)/sizeof(array[0]);
//     merge(array,0,length/2,length);
//     //Printing the sorted array
//     printf("\nThe sorted array is : \n\n");
//     for(int i=0;i<length;i++){
//         printf("%d ",array[i]);
//     }
// }