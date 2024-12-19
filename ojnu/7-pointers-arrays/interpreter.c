#include <stdio.h>
int main(void) {
    int x;scanf("%x", &x);
    printf("%d\n", x);
    printf("%u\n", (unsigned int)x);
    printf("%.6f\n", *(float *)&x);
    printf("%.4g\n", *(float *)&x);
    return 0;
}
