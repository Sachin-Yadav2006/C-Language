#include <stdio.h>
#include <stdlib.h>
int main(){
    int start=0,end=10,mid=5,i,j;
    int* temp1=(int*) malloc((mid-start)*sizeof(int));
    int* temp2=(int *) malloc((end-mid+1)*sizeof(int));
    int array[]={10,20,22,24,56,78,90,98,100,89};
    for(int i=start;i<mid;i++){
        printf("Enter the element of the first array:\n");
        scanf("%d",&temp1[i]);
    }
    for(j=mid;j<=end;j++)
    {
        temp2[j-mid]=array[j];
    }
    printf("\n\nThe elements entered of the first array are: \n");
    for( i=0;i<mid;i++){
        printf("%d  ",temp1[i]);
    }
     printf("\n\nThe elements entered of the second array are: \n");
    for( j=mid;j<=end;j++){
        printf("%d  ",temp2[j-mid]);
    }
     
    return 0;
}