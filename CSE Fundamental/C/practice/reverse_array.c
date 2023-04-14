#include <stdio.h>
int main()
{
    int arrSize, arr[5];
    scanf("%d", &arrSize);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = arrSize - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}