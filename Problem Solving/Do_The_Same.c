#include <stdio.h>
int main()
{
    int columns, rows;
    scanf("%d %d ", &columns, &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", j+1);;
        }
        printf("\n");
        
    }
}