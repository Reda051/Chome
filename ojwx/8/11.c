#include <stdio.h>
void StayVariable(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        StayVariable(i);

    }


    return 0;
}
void StayVariable(int n)
{
    static int step=1;
    step*=(n+1);
    printf("%d ", step);
}


