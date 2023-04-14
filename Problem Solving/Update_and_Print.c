#include <stdio.h>
int main()
{
    int n, replace_index, replace_value;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &replace_index, &replace_value);
    int updated_arr[n];
    for (int i = 0; i < n; i++)
    {
        if (i = replace_index)
        {
            arr[i] = replace_value;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", updated_arr[i]);
    }
}