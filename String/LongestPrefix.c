#include <stdio.h>
#include <string.h>
char *longestCommonPrefix(char **strs, int strsSize)
{
    printf("Inside the function\n");
    printf("%s\n",strs[3]);
    char prefix[strlen()]=strs[0];
    //char *prefix=strs[0];
    //printf("The value of the prefix j the index is %s\n",prefix[0]);
    // int length;
    // for(int i=1;i<strsSize;i++){
    //     length=strlen(strs[i]);
    //     char* tempString="";
    //     for(int j=0;j<length;j++){
    //         if(prefix[j]==strs[i][j]){
    //             //char* t=prefix[j];
    //             //strcat(tempString,t);
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     prefix=tempString;
    // }
    //return prefix;
}
int main()
{
    char *s[]={"flower","flow","fly"};
    char *l=longestCommonPrefix(s,3);
    printf("The common prefix of the array of the strings is %s\n",l);
    return 0;
}