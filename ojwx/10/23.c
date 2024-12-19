#include <stdio.h>

void sortMatrix(int arr[][5]);
void swap(int *a, int *b);

int main(void) {
    int arr[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    sortMatrix(arr);
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortMatrix(int arr[][5]) {
    int max = arr[0][0];
    int maxIndex1 = 0, maxIndex2 = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
                maxIndex1 = i;
                maxIndex2 = j;
            }
        }
    }
    int min[4] = {arr[0][0], arr[0][1], arr[0][2], arr[0][3]};
    int minIndex[4][2] = {{0, 0}, {0, 1}, {0, 2}, {0, 3}};
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            int current = arr[i][j];
            if(current < min[0]) {
                for(int k = 3; k > 0; k--) {
                    min[k] = min[k - 1];
                    minIndex[k][0] = minIndex[k - 1][0];
                    minIndex[k][1] = minIndex[k - 1][1];
                }
                min[0] = current;
                minIndex[0][0] = i;
                minIndex[0][1] = j;
            } else if(current < min[1]) {
                for(int k = 3; k > 1; k--) {
                    min[k] = min[k - 1];
                    minIndex[k][0] = minIndex[k - 1][0];
                    minIndex[k][1] = minIndex[k - 1][1];
                }
                min[1] = current;
                minIndex[1][0] = i;
                minIndex[1][1] = j;
            } else if(current < min[2]) {
                min[3] = min[2];
                minIndex[3][0] = minIndex[2][0];
                minIndex[3][1] = minIndex[2][1];
                min[2] = current;
                minIndex[2][0] = i;
                minIndex[2][1] = j;
            } else if(current < min[3]) {
                min[3] = current;
                minIndex[3][0] = i;
                minIndex[3][1] = j;
            }
        }
    }
    swap(&arr[0][0], &arr[minIndex[0][0]][minIndex[0][1]]);
    swap(&arr[0][4], &arr[minIndex[1][0]][minIndex[1][1]]);
    swap(&arr[4][0], &arr[minIndex[2][0]][minIndex[2][1]]);
    swap(&arr[4][4], &arr[minIndex[3][0]][minIndex[3][1]]);
    swap(&arr[2][2], &arr[maxIndex1][maxIndex2]);
}
