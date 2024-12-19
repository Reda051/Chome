#include <stdio.h>
int main(void) {
    int a[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }



    return 0;
}