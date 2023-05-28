#include <stdio.h>
int main()
{
    int line;
    scanf("%d", &line);
    int star = 1;
    int new_line = line * 2 - 1;
    int space = new_line - 1;
    for (int i = 1; i <= new_line; i++)
    {
        for (int s = 1; s <= space; s++)
        {
            printf(" ");
        }
        for (int s = 1; s <= star; s++)
        {
            printf("*");
        }
        if (i >= line)
        {
            star -= 2;
            space++;
        }
        else
        {
            star += 2;
            space--;
        }
        printf("\n");
    }
}