#include <stdio.h>
int main()
{
    int size_of_array;
    scanf("%d", &size_of_array);
    int arr[size_of_array];
    for (int i = 0; i < size_of_array; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size_of_array; i++)
    {
        for (int j = i + 1; j < size_of_array; j++)
        {
            if (arr[i] < arr[j])
            {
                int hold_j_value = arr[i];
                arr[i] = arr[j];
                arr[j] = hold_j_value;
            }
        }
    }
    for (int i = 0; i < size_of_array; i++)
    {
        printf("%d ", arr[i]);
    }
}