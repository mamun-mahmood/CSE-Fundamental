#include <stdio.h>
int main()
{
    int line;
    scanf("%d", &line);
    int num = 1;
    for (int i = 1; i <= line; i++)
    {
        for (int n = 1; n <= num; n++)
        {
            printf("%d ", n);
        }
        num++;
        printf("\n");
    }
}