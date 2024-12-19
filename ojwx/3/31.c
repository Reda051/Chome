#include <stdio.h>
int main(void) {
    long int nums[8];
    for (int i = 0; i < 8; i++) {
        scanf("%ld", &nums[i]);
    }
    for (int j = 0; j < 8; j++) {
        if(nums[j]>0){
            printf("%lo %lx\n", nums[j], nums[j]);
        }else{printf("-%lo -%lx\n", -nums[j], -nums[j]);   }

    }
    return 0;
}

