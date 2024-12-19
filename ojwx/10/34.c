/*用指向指针的指针的方法对n个整数从小到大排序并输出。要求将排序单独写成一个函数。n个整数在主函数中输入，经过函数排序后在主函数中输出。
第一行有一个整数n，保证n不超过100。 第二行有n个整数，用空格隔开。
在一行内输出从小到大有序的n个整数，每个整数后输出一个空格。
请注意行尾输出换行。
样例输入
10
1 3 5 7 9 2 4 0 8 6
样例输出
0 1 2 3 4 5 6 7 8 9 */
#include <stdio.h>
void BubbleSort(int *arr, int n);
int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
void BubbleSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr+j) > *(arr+j + 1)) {
                int temp = *(arr+j);
                *(arr+j) = *(arr+j + 1);
                *(arr+j + 1) =temp;
            }
        }
    }
}