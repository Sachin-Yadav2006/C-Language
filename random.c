#include <stdio.h>
#include <stdlib.h>
int main(){
    int array[];//Does not work in C/C++ but works fine in JAVA
    int s=10;
    int array[10];
    for(int i=0;i<10;i++){
        array[i]=rand()%2;  //last not included
    }
    int j;
    for(j=0;j<s;j++){
        printf("%d\t",array[j]);
    }
}