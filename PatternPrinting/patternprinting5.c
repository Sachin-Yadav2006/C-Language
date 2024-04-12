//Program to print the pattern of numbers 1 in the center  2 surrounding 1 from all side then 3 forming a rectangle over all 2 and then 4 forming a rectangle over all the 3's and so on.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number till when the pattern is to be printed : ");
    scanf("%d",&n);
    int m=2*n-1;
    for(int i=0; i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(i==k||j==k||i==(m-k-1)||j==(m-k-1))
                {
                    printf("%d  ",n-k);
                    break; 
                }
            }
        }
        printf("\n");
    }
    return 0;
}