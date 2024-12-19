/*题目描述
给定字符串定义char *a = “I love China!”，读入整数n，输出在进行了a = a + n这个赋值操作以后字符指针a对应的字符串。
输出进行了题目描述中赋值操作之后a对应的字符串。
请注意行尾输出换行。
样例输入
7
样例输出
China!*/

#include <stdio.h>
int main(void)
{
    char *a="I love China!";
    int n;
    scanf("%d",&n);
    if(n>=0&&n<=13)
    {
        a=a+n;

        for(int i =0;i<13-n;i++)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
    }
