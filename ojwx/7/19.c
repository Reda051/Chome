#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[200];
    char str2[100];
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    const int len1 = strlen(str1);
    const int len2 = strlen(str2);
    for(int i =0;i<=len2;i++)
    {
        str1[i+len1]=str2[i];
    }
    str1[len1 + len2] = '\0';
    printf("%s", str1);
    return 0;

}
