//
// Created by along on 24-11-5.
//
#include <stdio.h>
int Sum(int n,int arr[]);
int main(void) {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("%d",Sum(n,arr));
    return 0;
}
int Sum(int n,int arr[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}