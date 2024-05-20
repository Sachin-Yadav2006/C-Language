#include <stdio.h>
#include<stdlib.h>
void main(){
    int *ptr;
    ptr=malloc(6*sizeof(int));
    printf("The pointer's address is : %u\n",ptr);
    //return 0;
}