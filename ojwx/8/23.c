#include <stdio.h>
#include <string.h>

void BubbleSort(char str[], int n);

int main(void) {
    char str[100];
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    int n = strlen(str);
    BubbleSort(str, n);
    for (int i = 0; i < n; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

void BubbleSort(char str[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
