#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int n, max = 0;
    for (int i = 1; i <= 12; i++)
    {

        printf("%d * %d = %d\n", input, i, input * i);
    }
    return 0;
}