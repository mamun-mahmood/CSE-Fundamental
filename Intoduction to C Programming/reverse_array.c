#include <stdio.h>
int main()
{
    int arrSize;
    scanf("%d", &arrSize);
    int arr[arrSize];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    // for (int i = arrSize - 1; i >= 0; i--)
    // {
    //     printf("%d\n", arr[i]);
    // }
    printf("%d", arr[4]);
    return 0;
}