#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines to be printed:");
    scanf("%d",&n);
    int k=1;
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("   ");
        }
        for(int l=1;l<=k;l++)
        {
            if(l<10)
            printf("%d  ",l);
            else
            printf("%d ",l);
        }
        k+=2;
        printf("\n");
    }
    return 0;
}