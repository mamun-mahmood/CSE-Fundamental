#include<stdio.h>
int main()
{
    //check the input is upper or lower case
    char ch;
    //take a letter form user
    printf("Enter a letter:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("This letter is lower case");
    }
    else if (ch>='A' && ch<='Z')
    {
        printf("This letter is upper case");
    }
    else{printf("Invalid input!(Enter letter only)");}
    return 0;
}
