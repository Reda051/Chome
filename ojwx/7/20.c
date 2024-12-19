#include <stdio.h>
#define MAX_LENGTH 100
int main(void)
{
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    fgets(str1, MAX_LENGTH, stdin);
    fgets(str2, MAX_LENGTH, stdin);
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0' && str1[len1] != '\n') len1++;
    if (str1[len1] == '\n') str1[len1] = '\0';
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;
    if (str2[len2] == '\n') str2[len2] = '\0';
    int result = 0;
    int i = 0;
    while (i < len1 && i < len2)
    {if (str1[i] != str2[i])
        {result = str1[i] - str2[i];break;}
        i++;
    }
    if (result == 0)
    {
        result = len1 - len2;
    }
    printf("%d\n", result);
    return 0;
}
