//
// Created by along on 24-11-20.
//
#include <stdio.h>
void main() {
    int a, b;
    float d, e;
    char c1, c2;
    double f, g;
    long m, n;
    unsigned int p, q;

    a = 61; b = 62;
    c1 = 'a'; c2 = 'b';
    d = 3.56; e = -6.87;
    f = 3157.890121; g = 0.123456789;
    m = 50000; n = -60006;
    p = 32768; q = 40006;

    printf("a=%d, b=%d\nc1=%c, c2=%c\nd=%6.2f, e=%6.2f\n", a, b, c1, c2, d, e);
    printf("f=%15.6f, g=%15.2f\nm=%ld, n=%ld\np=%u, q=%u\n", f, g, m, n, p, q);
    printf("李大卫的作业");
}
