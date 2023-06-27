#include <stdio.h>

int main()
{
    int arrs[5][5] = {};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arrs[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arrs[i][j]);
        }
        printf("\n");
    }
    printf("%d ", arrs[2][3]);
    return 0;
}