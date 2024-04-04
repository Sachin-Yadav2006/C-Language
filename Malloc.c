#include <stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=malloc(6*sizeof(int));
    printf("The pointer's address is : %u\n",ptr);
    return 0;
}