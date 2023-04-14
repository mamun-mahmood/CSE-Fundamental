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
    int sum_of_even=0;
    int sum_of_odd=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum_of_even += arr[i];
        }
        else
        {
            sum_of_odd += arr[i];
        }
    }
    printf("%d %d", sum_of_even, sum_of_odd);

}