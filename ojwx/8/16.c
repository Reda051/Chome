#include <stdio.h>
void RoundArr(int arr1[][3],int arr2[][3]);
int main(void)
{
    int arr1[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    int arr2[3][3];
    RoundArr(arr1,arr2);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void RoundArr(int arr1[][3],int arr2[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[j][i]=arr1[i][j];
        }
    }
}
