#include <stdio.h>
int count_before_zero(int arr[], int size)
{
    int element_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            return element_count;
        }
        else
        {
            element_count++;
        }
    }
    return element_count;
}
int main()
{
    int arr[5] = {1, 0, 1, 0, 5};
    int element_count = count_before_zero(arr, sizeof(arr) / sizeof(int));
    printf("%d ", element_count);
    return 0;
}