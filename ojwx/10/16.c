/*题目描述 :输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。要求用3个函数实现，分别为输入10个数、进行处理、输出10个数。要求使用指针的方法进行处理。
输入 :用空格隔开的10个整数。
输出 输出进行题目描述操作之后的10个整数，每个整数之后输出一个空格。 请注意行尾输出换行。
样例输入 复制
1 5 2 4 9 0 3 8 7 6
样例输出 复制
0 5 2 4 6 1 3 8 7 9 */
#include <stdio.h>
void TransMax(int arr[]);
void TransMin(int arr[]);
void PrintArray(int arr[]);
int main(void) {
    int arr[10];
    for (int i = 0; i < 10; i++) {scanf("%d", &arr[i]);}
    TransMax(arr);
    TransMin(arr);
    PrintArray(arr);
    return 0;
}
void TransMax(int arr[]) {
    int max = arr[0];
    int index=0;
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    int temp=0;
    temp=arr[9];
    arr[9]=arr[index];
    arr[index]=temp;
}
void TransMin(int arr[]) {
    int min = arr[0];
    int index=0;
    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }
    int temp=0;
    temp=arr[0];
    arr[0]=arr[index];
    arr[index]=temp;
}
void PrintArray(int arr[]) {
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}