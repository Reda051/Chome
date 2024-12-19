#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 4096
int main(void)
{
    char *str = malloc(MAX_LENGTH * sizeof(char));
    if (str == NULL)
    {return 1;}
    fgets(str, MAX_LENGTH, stdin);
    int len = 0;
    while (*(str + len) != '\0' && *(str + len) != '\n') len++;
    if (*(str + len) == '\n') *(str + len) = '\0';
    bool InWord = false;
    char *p = str;
    while (*p != '\0')
    {
        if (isalpha(*p))
        {InWord = true;}
        else
        {
            InWord = false;
            if (!InWord && isalpha(*(p + 1)))
            {
                *(p + 1) = toupper(*(p + 1));
            }
        }
        p++;
    }
    printf("%s\n", str);
    free(str);
    return 0;
}
