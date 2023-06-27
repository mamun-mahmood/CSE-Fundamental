#include <stdio.h>
void reverse_recurs(int i)
{
    if (i == 6)
        return;
    reverse_recurs(i + 1);
    printf("%d\n", i);
}
int main()
{
    reverse_recurs(1);
    return 0;
}