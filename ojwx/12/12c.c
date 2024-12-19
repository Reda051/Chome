#include <stdio.h>
#include <string.h>
#define MAX_LEN 10000

int main(void) {
    char str[MAX_LEN];
    char *words[MAX_LEN];

    // 使用 fgets 读取每一行
    while (fgets(str, MAX_LEN, stdin) != NULL) {
        // 去除字符串末尾的换行符
        const int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }

        // 分割单词
        int word_count = 0;
        char *token = strtok(str, " ");
        while (token != NULL) {
            words[word_count++] = token;
            token = strtok(NULL, " ");
        }

        // 逆序输出单词
        for (int i = word_count - 1; i >= 0; i--) {
            printf("%s", words[i]);
            if (i > 0) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
