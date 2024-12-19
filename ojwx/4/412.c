//
// Created by reda on 24-10-12.
//
#include "stdio.h"
#define PI 3.1415926
int main (void){
    float r,h,c,s,v,ss,sv;
    scanf("%f %f",&r,&h);
    c=2*PI*r;
    s=PI*r*r;
    v=s*h;
    ss=4*PI*r*r;
    sv=4/3.0*PI*r*r*r;
    printf("%.2f %.2f %.2f %.2f %.2f\n",c,s,v,ss,sv);
    return 0;
}