#include <stdio.h>
int factorial(int n){
    printf("n= : %d \n",n);
    //if(n==0||n==1) return 1;
    return n*factorial(n-1);
}

int main(){
    int fact=factorial(8);
    printf("The factorial of the number is %d\n",fact);
    return 0;
}