#include <stdio.h>
int main()
{
    int row;
    int a=1;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    int b=row/2;
    for (int i=0; i<=b; i++ ){
        for (int j=0; j < row; j++)
        {
                if ( j>b-i & j< b+i)
                printf(" \t");
                else{
                    printf("%d\t",a);
                }
                a++;
        }
        a=1;
        printf("\n");
    }
    return 0;
}