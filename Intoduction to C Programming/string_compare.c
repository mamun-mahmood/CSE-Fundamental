#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    int i = 0;
    // custom way
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Same");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
    //     if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
    // }
    // built in function
    int result = strcmp(a, b);
    if (result > 0)
    {
        printf("B is smaller");
    }
    else if (result < 0)
    {
        printf("A is smaller");
    }
    else
    {
        printf("Same");
    }
}