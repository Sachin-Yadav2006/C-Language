#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines to be printed:");
    scanf("%d",&n);
    for(int i=n-1;i>=0; i--)
    {
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("****");
        printf("\n");
    }
    return 0;
}