#include <stdio.h>
int main(void)
{
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int n;
    double sum =0;
    double avg=0;
    scanf("%d", &n);
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                sum+=arr[i][j];
            }
        }

    }
    avg=sum/12.0;
    printf("%.2lf\n", avg);
    for(int j =0; j<4; j++)
    {
        printf("%d ",arr[n][j]);
    }
    return 0;
}