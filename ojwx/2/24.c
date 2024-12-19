#include <stdio.h>
#include <math.h>
int main (void) {
    double result=0;
    for(int i = 1 ; i<101 ; i++) {
            double temp = 1.0/i;
            result = result +temp*pow(-1,i+1);
        }
    printf("%.8f",result);
    return 0;
}