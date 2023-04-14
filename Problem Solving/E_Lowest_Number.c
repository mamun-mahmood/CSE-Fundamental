#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int lowest_num = 1001;
    int position;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < lowest_num)
        {
            lowest_num = arr[i];
            position = i+1;
        }
    }
    printf("%d %d\n", lowest_num, position);
}