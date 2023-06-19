#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num_of_str = 1;
    int num_of_space = n - 1;
    n *= 2;
    int num_of_line = n / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int space = num_of_space; space > 0; space--)
        {
            printf(" ");
        }
        for (int str = 0; str < num_of_str; str++)
        {
            printf("*");
        }
        if (i > num_of_line+1)
        {
            num_of_space++;
            num_of_str -= 2;
        }
        else if(i<num_of_line)
        {
            num_of_space--;
            num_of_str += 2;
        }
        printf("\n");
    }
}