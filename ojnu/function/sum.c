#include <stdio.h>
#include <tgmath.h>
int main(void) {
    int n,t;
    long int temp=0;
    scanf("%d %d",&n,&t);
    long long sum=0;
    for(int i=0;i<n;i++) {
        temp=temp*10+t;
        sum+=temp;
    }
    printf("%lld\n",sum);
    return 0;
}
