#include <math.h>
#include <stdio.h>

void CalculateRoot(int a, int b, int c);

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        printf("not a quadratic\n");
    } else {
        CalculateRoot(a, b, c);
    }

    return 0;
}

void CalculateRoot(int a, int b, int c) {
    double det = b * b - 4 * a * c;
    double shishuroot = -b / (2.0 * a);
    double xushuroot1 = sqrt(fabs(det)) / (2.0 * a);

    if (det == 0) {
        printf("two equal roots:%.4lf %.4lf\n", shishuroot, shishuroot);
    } else if (det > 0) {
        printf("distinct real roots:%.4lf %.4lf\n", shishuroot + xushuroot1, shishuroot - xushuroot1);
    } else if (det < 0) {
        printf("complex roots:%.4lf+%.4lfi %.4lf-%.4lfi\n", shishuroot, xushuroot1, shishuroot, xushuroot1);
    }
}
