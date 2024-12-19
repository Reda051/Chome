#include <stdio.h>
int *alloc(int n);
void free_memory(int n);
static int memory[10000];
static int *ptr = memory;
int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        memory[i] = 0;  }
    for (int i = 0; i < n; i++) {
        int size;
        scanf("%d", &size);
        int *result = alloc(size);
        printf("%d ", result == NULL ? 0 : (int)(result - memory) + 1);
    }
    return 0;
}
int *alloc(int n) {
    if (ptr + n <= memory + 10000) {
        int *allocated = ptr;
        ptr += n;
        return allocated;
    } else {
        return NULL;
    }
}
