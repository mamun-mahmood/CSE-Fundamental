#include <stdio.h>
int main()
{
    int n, input;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &input);
    int flag = -1;
    for (int i = 0; i < n; i++)
    {
        if (input == arr[i])
        {
            flag = i;
            break;
        }
    }
    printf("%d\n", flag);
}