#include <stdio.h>
#include <stdbool.h>
#include <tgmath.h>

bool IsPrime(int n);

int main(void) {
    int m;
    scanf("%d",&m);
    if(m>1&&m<100000000) {
        if(IsPrime(m)) {
            printf("prime\n");
        }else {
            printf("not prime\n");
        }
    }
}

bool IsPrime(int n) {
    for(int i=2;i<sqrt(n+0.5);i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}