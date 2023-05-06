#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    int length_of_first_str=strlen(a);
    for (int i = 0; i <= strlen(b); i++)
    {
        a[length_of_first_str] = b[i];
        length_of_first_str++;
    }
    // built in function
    // strcat(a,b);
    printf("%s",a );
}