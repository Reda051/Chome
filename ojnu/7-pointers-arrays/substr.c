#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main(void)
{
    char *S = malloc(MAX_LENGTH * sizeof(char));
    char *T = malloc(MAX_LENGTH * sizeof(char));
    if (S == NULL || T == NULL)
    {return 1;}
    fgets(S, MAX_LENGTH, stdin);
    fgets(T, MAX_LENGTH, stdin);
    int len1 = strlen(S);
    int len2 = strlen(T);
    if (S[len1 - 1] == '\n') S[len1 - 1] = '\0';
    if (T[len2 - 1] == '\n') T[len2 - 1] = '\0';

    bool Judge = false;
    for (int i = 0; S[i] != '\0'; i++)
    {
        for (int j = 0; T[j] != '\0'; j++)
        {
            if (T[j] == S[i])
            {
                Judge = true;
                break;
            }
        }
        if (Judge)
        {
            printf("%d\n", i);
            Judge = false;
        }
    }
    free(S);
    free(T);
    return 0;
}
