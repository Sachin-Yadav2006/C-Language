#include <string.h>
#include <stdio.h>
int strStr(char *haystack, char *needle)
{
        int flag = 0;
        int index;
        int start;
        int length=strlen(needle);
        for (int i = 0; haystack[i] != '\0'; i++)
        {
            start=i;
            for (int j = 0; needle[j] != '\0'; j++)
            {
                if (haystack[start] == needle[j])
                {
                    start++;
                    if ((j+1)==length)
                    {
                        index=i;
                        flag = 1;
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            if (flag==1){
                return index;
            }
        }
        return -1;
}
int main()
{
    char *hayStack = "78hsadbutsad";
    char *needle = "sad";
    int index = strStr(hayStack, needle);
    printf("The string found at the index: %d", index);
    return 0;
}