#include <stdio.h>
void Hanoi(int n, char from, char to, char mid);
int main(void) {
    int n;
    scanf("%d", &n);
    char from = 'A', mid = 'B', to = 'C';
    Hanoi(n, from, to, mid);
    return 0;
}
void Hanoi(int n, char from, char to, char mid) {
    if (n == 1) {
        printf("%c->%c\n", from, to);
    } else {
        Hanoi(n - 1, from, mid, to);
        printf("%c->%c\n", from, to);
        Hanoi(n - 1, mid, to, from);
    }
}
