#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i =0;i<n;i++) {
        scanf("%d", &arr[n-i-1]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
printf("\n");
    return 0;
}
