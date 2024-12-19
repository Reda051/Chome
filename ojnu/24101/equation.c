#include <math.h>
#include <stdio.h>
int main (void) {
    int p,q;
    scanf("%d %d",&p,&q);
    double det=pow(1.0*q/2,2)+pow(1.0*p/3,3);
    double ans=cbrt ((1.0*-q/2)+sqrt(pow((1.0*q/2),2)+pow((1.0*p/3),3)))+cbrt((1.0*-q/2)-sqrt(pow((1.0*q/2),2)+pow((1.0*p/3),3)));
    if (det>=0) {
        printf("%.3f",ans);
        return 0;
    }
}
