#include <stdio.h>
#include <string.h>
int is_palindrome(char text[])
{
    for (int i = 0, j = strlen(text) - 1; i < strlen(text); i++, j--)
    {
        // comparing by reversing the text string with j index
        if (text[i] != text[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char text[10];
    scanf("%s", text);
    if (is_palindrome(text) == 1)
    {
        printf("Palindrome ");
    }
    else
    {
        printf("Not Palindrome ");
    }
    return 0;
}