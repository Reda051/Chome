#include <stdio.h>

int MAX(int arr[]);

int main(void) {
    int arr[12]={0};
    for(int i=0;i<12;i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d",MAX(arr));
    return 0;
}

int MAX(int arr[]) {
    int max = arr[0];
    for(int i =0;i<12;i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}