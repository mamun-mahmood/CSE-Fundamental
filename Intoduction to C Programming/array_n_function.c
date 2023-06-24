#include <stdio.h>
void print_array(int arr[], int size)
{
    printf("%d ", sizeof(arr) / sizeof(int));
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    print_array(arr, 5);
    return 0;
}