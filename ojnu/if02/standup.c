#include "stdio.h"
int main(void) {
    int n;
    scanf("%d",&n);
    int nums[100005];
    for(int j = 0;j <=n ; j++) {scanf("%d",&nums[j]);}
    int tuo = 0;
    int up = nums[0];
    for(int before=1; before <= n ; before ++) {
        if(before > up ) {
            tuo+=before- up;
            up = before;
        }
        up = up+nums[before];
    }
    printf("%d",tuo);
    return 0;
}