#include <stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d%d",&a,&b);
    printf("The values of a and b before swapping are %d and %d respectively\n",a,b);
    swap(&a,&b);
    printf("The values of a and b after swapping are %d and %d respectively\n",a,b);
    return 0;
}