#include <stdio.h>
int main()
{
    int line;
    scanf("%d", &line);
    int num = 1, num_of_space = line;
    for (int i = 1; i <= line; i++)
    {
        for (int space = num_of_space - 1; space > 0; space--)
        {
            printf(" ");
        }
        num_of_space--;
        for (int n = num; n >= 1; n--)
        {
            printf("%d", num);
        }
        num++;
        printf("\n");
    }
}