#include <stdio.h>
int my_strcmp(const char *p1, const char *p2) {
    while (*p1 && (*p1 == *p2)) {
        p1++;
        p2++;
    }
    return *(unsigned char *)p1 - *(unsigned char *)p2;
}
int main(void) {
    char s1[201], s2[201];

    scanf("%s", s1);
    scanf("%s", s2);

    int value = my_strcmp(s1, s2);
    printf("%d\n", value);
    return 0;
}
