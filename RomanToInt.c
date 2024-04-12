#include <stdio.h>
#include <string.h>
int romanToInt(char *s)
{
    char Roman[] = "IVXLCDM";
    int integer[] = {1, 5, 10, 50, 100, 500, 1000};
    int number = 0;
    int length = strlen(s);
    int i = 0;
    int flag = 0;
    while (i < length - 1)
    {
        int k;
        for (k = 0; k < 7; k++)
        {
            if (s[i + 1] == Roman[k])
            {
                break;
            }
        }
        for (int j = 0; j < 7; j++)
        {
            if (s[i] == Roman[j])
            {
                if (integer[k] <= integer[j])
                {
                    number += integer[j];
                }
                else
                {
                    if (i == length - 2)
                        flag = 1;
                    number += (integer[k] - integer[j]);
                    i++;
                }
                break;
            }
        }
        i++;
    }
    if (flag == 0)
    {
        for (int l = 0; l < 7; l++)
        {
            if (s[length - 1] == Roman[l])
            {
                printf("The value of the l is %d\n", l);
                number += integer[l];
                break;
            }
        }
    }
    return number;
}
int main()
{
    char *s = "CMXCIX";
    int integer;
    integer = romanToInt(s);
    printf("The integer equivalent of the roman number is %d\n", integer);
    return 0;
}