#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[501];
    int arr[100];
    int count = 0;
    int i = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (isdigit(str[i])) {
            char numStr[6];
            int j = 0;
            while (isdigit(str[i]) && j < 5) {
                numStr[j++] = str[i++];
            }
            numStr[j] = '\0';
            arr[count++] = atoi(numStr);
        } else {
            i++;
        }
    }
    printf("%d\n", count);
    for (int j = 0; j < count; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
