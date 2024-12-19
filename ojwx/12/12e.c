#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int first_case = 1;
    while (scanf("%d", &n) != EOF) {
        int *arr = malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int min1 = 1000000, min2 = 10000000;
        int found_min2 = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] < min1) {
                min1 = arr[i];
            }
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] > min1 && arr[i] < min2) {
                min2 = arr[i];
                found_min2 = 1;
            }
        }
        if (first_case) {
            first_case = 0;
        } else {
            printf("\n");
        }
        if (found_min2) {
            printf("%d", min2);
        } else {
            printf("NO");
        }

        free(arr);
    }

    return 0;
}
