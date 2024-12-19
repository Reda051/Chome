//
// Created by reda on 24-10-11.
//
#include <stdio.h>
int main (void) {
    int a,b,c;
    int max_val=0,mid_val=0,min_val=0;
    scanf("%d %d %d",&a,&b,&c);
    int nums[3]={a,b,c};
    max_val=nums[0];
    min_val=nums[0];
    for(int i = 1 ; i< 3;i++) {
        if(nums[i]>max_val) {
            max_val=nums[i];
        }
        if(nums[i]<min_val) {
            min_val=nums[i];
        }
    }

    for(int i = 0;i < 3 ; i++) {
        if(nums[i]!=min_val&&nums[i]!=max_val) {
            mid_val=nums[i];
        }
    }
    printf("%d %d %d",min_val,mid_val,max_val);
    return 0;
}