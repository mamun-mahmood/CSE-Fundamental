#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", &s);
    int count_capital = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    printf("%d", count);
}