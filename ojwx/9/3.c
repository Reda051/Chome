#include <stdio.h>
#include <math.h>
#define s(a,b,c) ((a+b+c)/2.0)
#define area(a,b,c,s) (sqrt((s)*(s-a)*(s-b)*(s-c)))
int main(void) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double semi=s(a,b,c);
    double square=area(a,b,c,semi);
    printf("%.3lf\n",square);
    return 0;
}