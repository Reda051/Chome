#include <stdbool.h>
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    if (n > 0 && n <= 2000) {
        char string[n+1];
        scanf("%s",string);
        bool is_pal =true;
        int left = 0, right = n - 1;
        while (left<right) {
            if (string[left] != string[right] && string[left] != '?' && string[right] != '?') {
                is_pal = false;
                break;
            }
            if (string[left] == '?' && string[right] != '?') {
                string[left] = string[right];
            }
            if (string[right] == '?' && string[left] != '?') {
                string[right] = string[left];
            }
            left++;
            right--;
        }
            printf("%s\n", string);
    }
    return 0;
}
