/*最大公约数（GCD，Greatest Common Divisor）和最小公倍数（LCM，Least Common Multiple）是两个在数论中非常重要的概念。它们常用于整数运算，特别是在分数简化、解方程等问题中。
1. 最大公约数 (GCD)
最大公约数是能够同时整除两个或更多整数的最大整数。例如，6 和 9 的最大公约数是 3。
常用的算法：
欧几里得算法：这个算法可以用来高效地计算两个数的最大公约数。
欧几里得算法的基本思想是：
对于两个整数 a 和 b（假设 a > b），
GCD(a, b) = GCD(b, a % b)，直到 b 等于 0，此时 a 即为最大公约数。
2. 最小公倍数 (LCM)
最小公倍数是能够被两个或更多整数同时整除的最小整数。例如，6 和 9 的最小公倍数是 18。
最小公倍数的关系：
GCD 和 LCM 有一个重要的数学关系：
LCM(𝑎,𝑏)=∣𝑎×𝑏∣GCD(𝑎,𝑏)
LCM(a,b)= GCD(a,b)∣a×b∣​
这意味着最小公倍数等于两个数的乘积除以它们的最大公约数。
C 语言实现最大公约数和最小公倍数
以下是使用 C 语言实现最大公约数和最小公倍数的代码：*/
#include "stdio.h"

int gcd(int a, int b);
void GongBeiShu(int a, int b, int gcd_value);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int gcd_value = gcd(a, b);
    printf("%d ", gcd_value);
    GongBeiShu(a, b,gcd_value);
    return 0;
}
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
void GongBeiShu(int a, int b,int gcd_value)
{
    int lcm_value = (a * b) / gcd_value;
    printf("%d\n", lcm_value);
}
