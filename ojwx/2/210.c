#include <stdio.h>
#include <math.h>

int main(void) {
    for (int i = 100; i <= 200; i++) {
        int isPrime = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d\n", i);
        }
    }
    printf("\n");
    return 0;
}
