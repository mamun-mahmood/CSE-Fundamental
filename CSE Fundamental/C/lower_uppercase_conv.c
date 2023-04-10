#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a < 95 && a >= 65)
    {
        printf("%c", a + 32);
    }
    {
        printf("%c", a - 32);
    }
}