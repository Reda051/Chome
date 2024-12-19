#include <stdio.h>
int main(void) {
    int n, temp, digit[5], count = 0;
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        digit[count++] = temp % 10;
        temp /= 10;
    }
    printf("%d\n", count);
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", digit[i]);
    }
    printf("\n");
    for (int i = 0; i < count; i++) {
        printf("%d", digit[i]);
    }
    printf("\n");
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (digit[j] > digit[j + 1]) {
                int temp = digit[j];
                digit[j] = digit[j + 1];
                digit[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%d ", digit[i]);
    }
    printf("\n");

    return 0;
}
