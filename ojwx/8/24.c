#include <stdio.h>
#include <math.h>
double f(double x, double a, double b, double c, double d) {
    return a*x*x*x + b*x*x + c*x + d;
}
double f_prime(double x, double a, double b, double c) {
    return 3*a*x*x + 2*b*x + c;
}
double newton_method(double a, double b, double c, double d, double k) {
    double x = k;
    double epsilon = 1e-6;
    double delta = f(x, a, b, c, d) / f_prime(x, a, b, c);
    while (fabs(delta) > epsilon) {
        delta = f(x, a, b, c, d) / f_prime(x, a, b, c);
        x = x - delta;
    }
    return x;
}
int main(void) {
    double a, b, c, d, k;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &k);

    double root = newton_method(a, b, c, d, k);

    printf("%.4lf\n", root);
    return 0;
}

