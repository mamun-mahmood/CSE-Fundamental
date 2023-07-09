#include <stdio.h>

int main()
{
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    int arrs[rows][columns];
    int flag = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arrs[i][j]);
        }
    }
    int search_num;
    scanf("%d", &search_num);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arrs[i][j] == search_num)
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}