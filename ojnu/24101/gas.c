#include <stdio.h>
int main(void){
   const double R = 8.314;
   double P,V,n,T,L;
   scanf("%lf %lf %lf",&P,&L,&T);
   V=L*L*L;
   n=(P * V)/(R * T);
   printf("%.4e",n);
   return 0;
}

/*
 *
 *
 *
 *
 *
 *
*
#include <stdio.h>
int main(void){
   const double R = 8.314;
   double P,V,n,T,L;
   scanf("%lf %lf %lf",&P,&L,&T);
   V=L*L*L;
   n=(P * V)/(R * T);
   printf("%.5g",n);
   return 0;
}

 *
*#include <stdio.h>
*
#include <math.h>
int main() {
   double P, L, T, V, n;
   const double R = 8.314;
   scanf("%lf %lf %lf", &P, &L, &T);
   V = pow(L, 3);
   n = (P * V) / (R * T);
   printf("%.5e\n", n);
   return 0;
}
 *
 *

#include <stdio.h>
int main(void) {
    double R = 8.314;
    double P, L, T,V;
    V= L * L * L;
    scanf("%lf %lf %lf", &P, &L, &T);
    double n = 1.0 * (P * V) / (R * T);
    printf("n : %.5g\n",n);
    return 0;
}
/**#include <stdio.h>
int main(void) {
   float R = 8.314;
   float P, L, T;
   float V = L * L * L;
   float n =(P * V) / (R * T);
   scanf("%f %f %f", &P, &L, &T);
   printf("n : %.5g", n);
   return 0;
}*/
/*
#include <stdio.h>
int main() {
double P, L, T, V, n;
double R = 8.314;
scanf("%lf %lf %lf", &P, &L, &T);
V = L*L*L;
n = (P * V) / (R * T);
printf("%.5e \n",n);
return 0;


}
/*#include <math.h>
int main() {
   double P, L, T, V, n;
   double R = 8.314;
   scanf("%lf %lf %lf", &P, &L, &T);
   V = pow(L, 3);
   n = (P * V) / (R * T);
   printf("n = %.5e mol\n",n);
   return 0;
}

/*   scanf("%f %f %f",&P,&L,&T);
   n=P*V/(R*T);
   printf("%.5g\n",&n);
   return 0;
}
*/