//
// Created by reda on 24-10-11.
//
#include <stdio.h>
int main (void) {
    double m ,R ,G=6.674E-11,M=77.15,F;
    scanf("%lf %lf",&m,&R);
    F=(G * M * m)/(R*R);
    printf("%.4e",F);
    return 0;
}
