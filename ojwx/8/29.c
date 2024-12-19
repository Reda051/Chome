/*用递归法将一个整数n转换成字符串。例如，输入483，应该输出字符串“483”。n的位数不确定，可以是任意位数的正整数。
输入:只有一行，包含一个不超过1000000的正整数。
输出:输出相应的字符串。
请注意行尾输出换行。
样例输入:123875
样例输出:123875*/
#include <stdio.h>
#define MAX_LENGTH 100
void intToString(int n, char *str, int *index)
{if (n == 0)
    {return;}
    intToString(n / 10, str, index);
    str[(*index)++] = (n % 10) + '0';
}
int main(void)
{
    int n;
    char str[MAX_LENGTH] = {'\0'};
    int index = 0;
    scanf("%d", &n);
    intToString(n, str, &index);
    printf("%s\n", str);
    return 0;
}
