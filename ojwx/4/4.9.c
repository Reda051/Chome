//
// Created by reda on 24-10-12.
//
#include <stdio.h>
#include <math.h>
int main (void){
    double a,b,c,p,s;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        p=(a+b+c)/2.0;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
    }
    printf("%.2lf\n",s);
    return 0;
}
