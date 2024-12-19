#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}
int main(void) {
    int n;
    while (scanf("%d", &n) != EOF) {
        int arr[n], sorted[n], result[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sorted[i] = arr[i];
        }
        qsort(sorted, n, sizeof(int), compare);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i] == sorted[j]) {
                    result[i] = j + 1;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            printf("%d", result[i]);
            if (i < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
