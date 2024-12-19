/*题目描述 输入n个整数，使前面的n-m个数顺序向后移动m个位置，最后的m个数变成最前面的m个数。通过函数实现以上的功能。
输入 第一行包含两个用空格隔开的整数n和m，保证n>m且n不超过50。第二行包含n个用空格隔开的整数。
输出 输出进行题目描述操作之后的n个整数，每个整数之后输出一个空格。 请注意行尾输出换行。
样例输入
6 2
1 2 3 4 5 6
样例输出 复制
5 6 1 2 3 4 */
#include <stdio.h>
void TransArray(int arr[],int n,int m);
int main(void) {
    int n;
    int m;
    scanf("%d %d", &n,&m);
    int arr[n];
    for (int i = 0; i < n; i++) {scanf("%d", &arr[i]);}
    TransArray(arr,n,m);
    return 0;
}
void TransArray(int arr[],int n,int m) {
    int tem[n];
    int j = 0;
    for (int i = n-m; i < n; i++) {tem[j]=arr[i];j++;}
    for (int i = 0; i <n-m; i++) {tem[m+i]=arr[i];}
    for (int i = 0; i < n; i++) {printf("%d ", tem[i]);}
}