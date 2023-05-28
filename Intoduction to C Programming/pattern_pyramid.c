#include <stdio.h>
int main()
{
    int line;
    scanf("%d", &line);
    int space = line - 1;
    int star = 1;
    for (int i = 0; i < line; i++)
    {
        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }
        for (int s = 0; s < star; s++)
        {
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }
}