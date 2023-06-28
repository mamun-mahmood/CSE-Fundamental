#include <stdio.h>
void printRecurs(int n)
{
    if (n < 1)
        return;
    printf("I love Recursion\n");
    n--;
    printRecurs(n);
}

int main()
{
    int n, count=1;
    scanf("%d", &n);
    printRecurs(n);
    return 0;
}