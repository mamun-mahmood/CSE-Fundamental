#include <stdio.h>
void printRecurs(int n)
{
    if (n == 1)
    {
        printf("%d", n);
        return;
    }

    printf("%d ", n);
    printRecurs(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printRecurs(n);
    return 0;
}