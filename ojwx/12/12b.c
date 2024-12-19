#include <stdio.h>
#include <string.h>
int main(void) {
    int m, n;
    scanf("%d", &m);
    for (int t = 0; t < m; t++) {
        scanf("%d", &n);
        char name[10][21];

        for (int i = 0; i < n; i++) {
            scanf("%s", name[i]);
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (strcmp(name[j], name[j + 1]) > 0) {
                    char temp[21];
                    strcpy(temp, name[j]);
                    strcpy(name[j], name[j + 1]);
                    strcpy(name[j + 1], temp);
                }
            }
        }
        for (int i = 0; i < n; i++) {
            printf("%s\n", name[i]);
        }
    }
    return 0;
}
