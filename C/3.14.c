# include<stdio.h>
int main()
{
    char ch;
    printf("Insert a letter");
    scanf("%c",&ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("This letter is vowel %c",ch);
            }
    else{
                printf("This letter is consonant %c", ch);
            }
            return 0;
}
