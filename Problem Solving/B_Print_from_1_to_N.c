#include <stdio.h>
void printRecurs(int n)
{
    if (n < 1)
        return;
    printRecurs(n - 1);
    printf("%d\n", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    printRecurs(n);
    return 0;
}