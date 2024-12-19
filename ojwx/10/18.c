#include <stdio.h>
int main(void) {
    int n,k=3,god_son=0;
    scanf("%d",&n);
    for (int i=2; i <= n;i++) {god_son= (god_son+k) % i;}
    printf("%d\n",god_son+1);
    return 0;
}