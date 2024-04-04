#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of the string to be reversed:");
    scanf("%d",&n);
    char string[n];
    fflush(stdin);
    printf("Enter the string to be reversed:");
    gets(string);
    printf("The original string is \n%s\n",string);
    char strd[n];
    for(int i=n-1;i>=0;i--)
    {
        strd[i]=string[n-i-1];
    }
    printf("The string obtained after reversing the characters is \n %s \n",strd);
    return 0;
}