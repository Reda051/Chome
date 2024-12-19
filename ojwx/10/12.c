#include <stdio.h>
/*题目描述
读入两个整数a和b，找出二者的较大值、较小值以及两数之和。请使用函数指针作为函数参数的方式实现，即通过函数指针在同一个函数中实现不同的功能。
输入
两个用空格隔开的整数a和b。
输出
a和b中较大的值、较小的值以及两数之和，用空格隔开。
请注意行尾输出换行。
样例输入
5 9
样例输出
9 5 14*/
typedef int (*Func)(int, int);
int max(int a, int b) {
    return a > b ? a : b;
}
int min(int a, int b) {
    return a < b ? a : b;
}
int sum(int a, int b) {
    return a + b;
}
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    Func func;
    func = max;
    printf("%d ", func(a, b));
    func = min;
    printf("%d ", func(a, b));
    func = sum;
    printf("%d\n", func(a, b));
    return 0;
}
