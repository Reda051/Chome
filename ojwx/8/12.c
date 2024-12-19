 #include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    register int step=1;
    for (int i = 0; i < n; i++)
    {

        step=step*(i+1);
        printf("%d ", step);
    }
    return 0;
}



