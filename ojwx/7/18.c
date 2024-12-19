#include <stdio.h>
#include <ctype.h>
#include <string.h>
/*有一行电文，已经按照如下规则译成了密码：
A->Z a->z
B->Y b->y
C->X c->x
… …
… …
即第1个字母变换成第26个字母，第i个字母变换成第(26-i+1)个字母。非字母字符不变。给定一段密码，请将其译成原文并输出。
一行密码，包含各种可见字符，保证长度不超过100。
如题目描述中密码翻译规则译出的原文。
请注意行尾输出换行。
样例输入
R zn z kiltizn.
样例输出
I am a program.*/
int main(void)
{
    char str[100];
    fgets(str, 100, stdin);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (isupper(str[i]))
        {
            str[i]=90-(str[i]-64)+1;
        }
        if (islower(str[i]))
        {
            str[i]=122-(str[i]-96)+1;
        }
    }
    printf("%s", str);

}