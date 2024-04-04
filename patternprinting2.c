#include <stdio.h>
//Printing the star pattern in the form of right angle triangle with its edge on right side
int main()
{
    int m,n;
    printf("Enter the number of row and column:");
    scanf("%d%d",&m,&n);
    int ch=65;
    for (int i=1; i<=m;i++)
    {
        for (int j=0; j<(n-i);j++)
        {
            printf(" ");
        }
        for (int k=0;k<i;k++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
        ch=65;
    }
}