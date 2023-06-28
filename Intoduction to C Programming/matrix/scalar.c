#include <stdio.h>
#include <string.h>
int main()
{
    int arrays_size, array_size;
    scanf("%d %d", &arrays_size, &array_size);
    int arrs[arrays_size][array_size];
    char result[25] = {"Secondary Scalar Matrix"};
    if (array_size != arrays_size)
    {
        strcpy(result, "Matrix is not Scalar");
        // return 0;
    }
    for (int i = 0; i < arrays_size; i++)
    {
        for (int j = 0; j < array_size; j++)
        {
            scanf("%d", &arrs[i][j]);
        }
    }

    for (int i = 0; i < arrays_size; i++)
    {
        for (int j = 0; j < array_size; j++)
        {
            if (i == j)
            {
                if (arrs[0][0] != arrs[i][j])
                {
                    strcpy(result, "Matrix is not Scalar");
                    break;
                }
            }
            else if (arrs[i][j] != 0)
            {
                strcpy(result, "Matrix is not Scalar");
                break;
            }
        }
    }
    printf("%s", result);
    return 0;
}