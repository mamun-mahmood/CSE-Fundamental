#include <stdio.h>
int main()
{
    int size_of_array;
    scanf("%d", &size_of_array);
    int arr[size_of_array], num;
    scanf("%d", &num);
    for (int i = 0; i < size_of_array; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size_of_array; i++)
    {
        for (int j = i + 1; j < size_of_array; j++)
        {
            if (num == i + j)
            {
                printf("%d+%d=%d\n", i, j, num);
            }
        }
    }
}