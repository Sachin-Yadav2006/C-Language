#include <stdio.h>
int main(){
    int row;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    int a=0,b=row-1;
    for(int i=0; i< row; i++)
    {
        for(int j=0; j< row; j++)
        {
            if ( j==a || j == b )
            {
                printf("*");
            }
            else
            printf(" ");
        }
        a++;
        b--;
        printf("\n");
    }
    return 0;
}