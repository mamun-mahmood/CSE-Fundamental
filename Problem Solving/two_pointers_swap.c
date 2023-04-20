#include <stdio.h>
int main()
{
    // initialize n
    int n;
    // take n input for array size
    scanf("%d", &n);
    // initialize array with n input
    int arr[n];
    // take input for the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // swap array elements
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
