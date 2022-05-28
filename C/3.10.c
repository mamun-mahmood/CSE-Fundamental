#include<stdio.h>
int main()
{
    char ch;
    printf("Insert a letter\n");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("%c \nis lower case\n",ch);
    }
    else ifr(ch>='A' && ch <='Z')
    {
        printf("%c \nis upper case\n",ch);
            }

            return 0;
}
