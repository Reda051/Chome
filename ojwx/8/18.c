#include <stdio.h>
#include <string.h>

void CopyBoard(char *str1, char *str2);
int main(void)
{
    char str1[100], str2[100];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    CopyBoard(str1, str2);

    printf("%s", str1);
    return 0;
}
void CopyBoard(char *str1, char *str2)
{
    str1[strcspn(str1, "\n")] = '\0';
    strcat(str1, str2);
}
