#include <stdio.h>
int main()
{
    int input;
    // 256
    scanf("%d", &input);
    // for (int i = 1; i <= 12; i++)
    // {

    while (input > 1)
    {
        input % 10;
        printf(" %d\n", input % 10);
        input / 10;
    }

    // }
    return 0;
}