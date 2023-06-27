#include <stdio.h>
#include <string.h>
int main()
{
    int arrays_size, array_size;
    scanf("%d %d", &arrays_size, &array_size);
    int arrs[5][3] = {};
    for (int i = 0; i < arrays_size; i++)
    {
        for (int j = 0; j < array_size; j++)
        {
            scanf("%d", &arrs[i][j]);
        }
    }
    char result[20] = {"Zero Matrix"};
    for (int i = 0; i < arrays_size; i++)
    {
        for (int j = 0; j < array_size; j++)
        {
            if (arrs[i][j] != 0)
            {
                strcpy(result, "Not Zero Matrix");
                break;
            }
        }
    }
    printf("%s", result);
    return 0;
}