#include <stdio.h>
int main (void){
    int n;
    scanf("%d",&n);
    if(n>=3&&n<10000) {
        if(n%2!=0) {
            printf("prime");
        }else {
            printf("not prime");
        }
    }
    return 0;
}