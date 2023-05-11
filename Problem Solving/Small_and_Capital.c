#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int count_capital = 0;
    int count_small = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count_capital++;
        }
        else {
            count_small++;
        }
    }
    printf("%d %d", count_capital, count_small);
}