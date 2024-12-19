#include <stdio.h>
#include <string.h>
void CopyOral(char str1[], char str2[]);
int main(void) {
    char str1[100], str2[100];
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';
    CopyOral(str1, str2);
    printf("%s\n", str2);
    return 0;
}
void CopyOral(char str1[], char str2[]) {
    int count = 0;
    const int len1 = strlen(str1);
    for (int i = 0; i < len1; i++) {
        char ch = str1[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            str2[count] = ch;
            count++;
            }
    }
    str2[count] = '\0';
}
