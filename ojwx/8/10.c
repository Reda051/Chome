#include <stdio.h>
double MAX(double arr[]);
double MIN(double arr[]);
double AVG(double arr[]);

int main(void) {
    double arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
    }
    printf("%.2lf %.2lf %.2lf",AVG(arr),MAX(arr),MIN(arr));
    return 0;
}

double MAX(double arr[]) {
    double MAX_VAL = arr[0];
    for (int i = 0; i < 10; i++) {
        if (arr[i] > MAX_VAL) {
            MAX_VAL = arr[i];
        }
    }
    return MAX_VAL;
}
double MIN(double arr[]) {
    double MIN_VALUE = arr[0];
    for (int i = 0; i < 10; i++) {
        if (arr[i] < MIN_VALUE) {
            MIN_VALUE = arr[i];
        }
    }
    return MIN_VALUE;
}
double AVG(double arr[]) {
    double sum = 0;
    for (int i = 0; i < 10; i++) {
        sum=sum+arr[i];

    }
    return sum/10.0;
}