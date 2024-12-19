#include <stdio.h>
#define GET_BIT(num, pos) ((num >> pos) & 1)
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    int original_a = a; // 保存原始的 a 供后面使用
    int count = 0;
    // 计算汉明权重
    int temp_a = original_a; // 使用一个临时变量
    while (temp_a) {
        count += temp_a & 1; // 统计1的数量
        temp_a >>= 1; // 右移一位
    }
    int bit = GET_BIT(original_a, b); // 获取 original_a 的第 b 位
    int mid = 1 << b; // 使用位运算计算 2^b
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",
        original_a & b, original_a | b, original_a ^ b, ~original_a, original_a << b, original_a >> b, bit, count);
    return 0;
}