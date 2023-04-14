#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int n, max = 0;
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
        }
    }
    printf("%d", max);
    return 0;
}