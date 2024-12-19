#include <stdio.h>
int main(void) {
    int a = 1, b = 1;
    printf("%d %d ", a, b);
    for (int i = 3; i <= 40; i++) {
        int next = a + b;
        printf("%d ",next);
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
