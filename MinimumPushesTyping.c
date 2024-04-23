/*You are given a string word containing distinct lowercase English letters.

Telephone keypads have keys mapped with distinct collections of lowercase English letters, which can be used to form words by pushing them. For example, the key 2 is mapped with ["a","b","c"], we need to push the key one time to type "a", two times to type "b", and three times to type "c" .

It is allowed to remap the keys numbered 2 to 9 to distinct collections of letters. The keys can be remapped to any amount of letters, but each letter must be mapped to exactly one key. You need to find the minimum number of times the keys will be pushed to type the string word.

Return the minimum number of pushes needed to type word after remapping the keys.*/

#include <stdio.h>
#include <string.h>
int minimumPushes(char *word)
{
    int length = strlen(word);
    if (length <= 8)
    {
        return length;
    }
    else if (length <= 16)
    {
        return 8 + (length - 8) * 2;
    }
    else
    {
        int count[26]={0};
        for (int i = 0; i < length; i++)
        {
            count[word[i]-96]+=1;

        }
        for
    }
}
int main()
{
    char *c = "abcde";
    int push = minimumPushes(c);
    printf("The minimum number of Pushes required is %d", push);
    return 0;
}