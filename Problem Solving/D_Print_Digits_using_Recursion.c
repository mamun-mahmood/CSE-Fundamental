#include <stdio.h>
void print_digits(int num)
{
    if (num < 10)
    {
        printf("%d ", num);
        return;
    }
    print_digits(num / 10);
    printf("%d ", num % 10);
}
int main()
{
    int number_of_lines;
    scanf("%d", &number_of_lines);
    int lines[number_of_lines];
    for (int i = 0; i < number_of_lines; i++)
    {
        scanf("%d\n", &lines[i]);
    }
    for (int i = 0; i < number_of_lines; i++)
    {
        print_digits(lines[i]);
        printf("\n");
    }
    return 0;
}