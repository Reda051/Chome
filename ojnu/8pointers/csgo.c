#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define RULE_MAX 128
#define COMMAND_MAX 1024

bool isValid(const char command_rule[RULE_MAX], const char **sector, int count_sector);
bool check_parameters(const char command_rule[RULE_MAX], int *arr_para, const char **sector, int count_sector);
int count_strings(const char **sector);

int main(void) {
    char command[COMMAND_MAX];
    const char *sector[COMMAND_MAX];
    char command_rule[RULE_MAX];

    scanf("%s", command_rule);
    getchar();
    fgets(command, COMMAND_MAX, stdin);
    command[strcspn(command, "\n")] = '\0';

    // 分割命令
    char *token = strtok(command, " ");
    int i = 0;
    while (token != NULL && i < COMMAND_MAX) {
        sector[i] = token;
        token = strtok(NULL, " ");
        i++;
    }
    sector[i] = NULL;  // 标记结束
    int count_sector = count_strings(sector);

    // 判断命令是否符合规则
    bool valid = isValid(command_rule, sector, count_sector);
    if (!valid) {
        return 0;
    }

    int arr_para[count_sector];
    for (int j = 0; j < count_sector; j++) {
        arr_para[j] = 0;
    }
    bool para_valid = check_parameters(command_rule, arr_para, sector, count_sector);
    if (!para_valid) {
        return 0;
    }

    printf("%s\n", sector[0]);  // 输出程序名
    for (int i = 1; i < count_sector; i++) {
        if (sector[i][0] == '-') {
            char option = sector[i][1];
            if (arr_para[i] == 1 && i + 1 < count_sector) {
                printf("%c=%s\n", option, sector[i + 1]);
                i++;  // 跳过参数值
            } else {
                printf("%c\n", option);
            }
        }
    }

    return 0;
}

bool isValid(const char command_rule[RULE_MAX], const char **sector, int count_sector) {
    // 此处不再检查无效选项，将检查逻辑移至 check_parameters 函数中处理
    return true;
}

bool check_parameters(const char command_rule[RULE_MAX], int *arr_para, const char **sector, int count_sector) {
    bool para_valid = true;

    // 检查参数规则是否符合
    for (int i = 1; i < count_sector; i++) {
        if (sector[i][0] == '-') {
            char option = sector[i][1];
            const char *rule_pos = strchr(command_rule, option);
            if (rule_pos != NULL && rule_pos[1] == ':') {
                arr_para[i] = 1;  // 需要参数
                if (i + 1 >= count_sector || (sector[i + 1][0] == '-' && isalpha(sector[i + 1][1]))) {
                    // 修正了此处逻辑，确保 '-Z' 被视为参数值
                    if (sector[i + 1][0] == '-' && strlen(sector[i + 1]) == 2 && isalpha(sector[i + 1][1])) {
                        continue;
                    }
                    printf("%s: option requires an argument -- '%c'\n", sector[0], option);
                    para_valid = false;
                    break;
                }
            } else if (rule_pos != NULL) {
                arr_para[i] = 0;  // 不需要参数
            } else {
                // 输出无效选项的错误信息
                printf("%s: invalid option -- '%c'\n", sector[0], option);
                para_valid = false;
                break;
            }
        }
    }

    return para_valid;
}

int count_strings(const char **sector) {
    int count = 0;
    while (sector[count] != NULL) {
        count++;  // 遍历 sector 数组，直到找到 NULL 结束
    }
    return count;
}
