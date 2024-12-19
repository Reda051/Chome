#include <stdio.h>
#include <string.h>
int main(void) {
    int n;
    scanf("%d", &n);
    getchar();
    char str[n][21];
    for (int i = 0; i < n; i++) {
        fgets(str[i], 21, stdin);
        str[i][strcspn(str[i], "\n")] = '\0';
    }
    char temp[21];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}
