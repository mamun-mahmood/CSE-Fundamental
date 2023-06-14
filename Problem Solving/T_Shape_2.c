#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num_of_str = 1;
    int num_of_space=n-1;
    for (int i = 1; i <= n; i++)
    {
        for (int space = num_of_space; space >0; space--)
        {
            printf(" ");
        }
        num_of_space--;
        for (int str = 0; str < num_of_str; str++)
        {
            printf("*");
        }
        num_of_str+=2;
        printf("\n");
    }
}