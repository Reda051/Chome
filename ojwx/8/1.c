#include <stdio.h>
#include <math.h>
double Calculate(double x) {
    return x * x * x - 5 * x * x + 16 * x - 80;
}
int main(void) {
    double epu = 1e-6;
    double x1, x2;
    scanf("%lf %lf", &x1, &x2);
    double y1, y2;
    y1 = Calculate(x1);
    y2 = Calculate(x2);

    double result = (x1 * y2 - x2 * y1) / (y2 - y1);
    double yr = Calculate(result);

    while (fabs(yr) >= epu) {
        if ((yr > 0 && y1 > 0) || (yr < 0 && y1 < 0)) {
            x1 = result;
        } else {
            x2 = result;
        }
        y1 = Calculate(x1);
        y2 = Calculate(x2);
        result = (x1 * y2 - x2 * y1) / (y2 - y1);
        yr = Calculate(result);
    }

    printf("%.4lf\n", result);
    return 0;
}
