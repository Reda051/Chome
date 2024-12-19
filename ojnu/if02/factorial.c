#include <stdio.h>

int main(void) {
    int n;
    long int jie = 1;
    long int end = 0;
    scanf("%d", &n);
    if (n >= 1 && n <= 25) {
        int num[n +1];
        for (int i = 1; i <= n; i++) {
            jie = 1;
            for (int j = 1; j <= i; j++) {
                jie = (jie * j) % 10007;
            }
            num[i] = jie;
        }
        for (int i = 1; i <= n; i++) {
            end = (end + num[i]) % 10007;
        }
        printf("%ld\n", end);
    }

    return 0;
}





/*//
// Created by reda on 24-10-9.
//
#include <stdio.h>
int main(void) {
    //先表示n的阶乘，再让阶乘相加，最后取模
    //先表示从1-n的阶乘,
    int n,num[n],end;
    long int jie=1;
    scanf("%d",&n);
    if(n>=1&&n<=25) {
        for(int i =0;i <= n;i++){
            int count=0;
            for(int i = 1;i<=n;i++) {
                jie=jie*i%10007;
            }
            num[n]=jie;
            count++;
            if(count ==n) {
                break;
            }
        }
    }
for(int i = 0;i <n ; i++) {
    end+=num[i];
}

    printf("",end);
    return 0;
}*/