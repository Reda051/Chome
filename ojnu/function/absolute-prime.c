#include <math.h>
#include <stdio.h>
#include <stdbool.h>
bool IsPrime(int n);
int ReverseNum(int n);
int main(void) {
    int n,roundn=0;
    int count=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++) {
        if(IsPrime(i)) {
            roundn=ReverseNum(i);
            if(IsPrime(roundn)) {
            count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}


bool IsPrime(int n) {
    if(n<2) {return false;}
    for(int i=2;i<=sqrt(n+0.5);i++) {
        if(n%i==0) {return false;}}
    return true;
}
int ReverseNum(int n) {
    int a,b,c,newn=0;
    if(n>=100) {
        a=n/100;
        b=n%100/10;
        c=n%10;
        newn=c*100+b*10+a;
    }
    if(n>=10&&n<100) {
        b=n/10;
        c=n%10;
        newn=c*10+b;
    }
    if(n>0&&n<10) {
        newn=n;
    }
    return newn;
}