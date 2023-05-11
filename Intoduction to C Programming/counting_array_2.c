#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int count[26]
    for (int i = 0; i < strlen(s); i++)
    {
        int val=arr[i];
        count[val]++;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d - %d \n", i,count[i]);
    }
}