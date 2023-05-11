#include <stdio.h>
int main()
{
    int size, find;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &find);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == find)
        {
            count++;
        }
    }
    printf("%d", count);
}