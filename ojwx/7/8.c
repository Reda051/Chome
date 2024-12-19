#include <math.h>
#include <stdio.h>
#include <stdbool.h>
int main(void) {
    bool isPrime = true;
    for(int i=2;i<=100;i++) {
        for(int j=2;j<=sqrt(i+0.5);j++) {
            if(i%j==0) {
                isPrime = false;
                break;
            }else{isPrime = true;}

        }
        if(isPrime==true) {
            printf("%d ",i);
        }
    }
        printf("\n");
        return 0;
}
