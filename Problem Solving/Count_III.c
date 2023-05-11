#include <stdio.h>
#include <string.h>
int main()
{
    char s;
    int count[26] = {0};
    while (scanf("%c", &s) != EOF)
    {
        count[s - 'a']++;
    }
    for (char i= 'a'; i <= 'z'; i++)
    {
        printf("%c - %d \n", i, count[i - 'a']);
    }
}