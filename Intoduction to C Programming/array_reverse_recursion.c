#include <stdio.h>
void reverse_recurs(int arr[], int size)
{
    if (size < 0)
        return;
    printf("%d\n", arr[size]);
    size--;
    reverse_recurs(arr, size);
}
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    reverse_recurs(arr, sizeof(arr) / sizeof(int) - 1);
    return 0;
}