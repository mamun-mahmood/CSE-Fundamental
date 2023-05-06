#include <stdio.h>
int main()
{
    // initialize n
    int array_1_size, array_2_size;
    scanf("%d %d", &array_1_size, &array_2_size);
    int arr_1[array_1_size], arr_2[array_2_size], arr_3[array_1_size + array_2_size];
    for (int i = 0; i < array_1_size; i++)
    {
        scanf("%d", &arr_1[i]);
    }
    for (int i = 0; i < array_2_size; i++)
    {
        scanf("%d", &arr_2[i]);
    }
    // copy to array_3
    for (int i = 0; i < array_1_size; i++)
    {
        arr_3[i] = arr_1[i];
    }
    int new_index = array_1_size;
    for (int i = 0; i < array_2_size; i++)
    {
        arr_3[new_index] = arr_2[i];
        new_index++;
    }
    for (int i = 0; i < array_1_size + array_2_size; i++)
    {
        printf("%d ", arr_3[i]);
    }
    return 0;
}
