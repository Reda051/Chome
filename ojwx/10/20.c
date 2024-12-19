#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 100
void CopyString(char *str, int n, int m);
int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    getchar();
    char str[MAX_LENGTH];
    fgets(str, MAX_LENGTH, stdin);
    int len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
    CopyString(str, n, m);
    return 0;
}
void CopyString(char *str, int n, int m) {
    char *str1 = malloc((n - m + 1) * sizeof(char));
    if (str1 == NULL) {
        return;
    }
    for (int i = 0; i <= (n - m); i++) {
        str1[i] = str[m + i - 1];
    }
    str1[n - m + 1 ] = '\0';
    printf("%s", str1);
    free(str1);
}
