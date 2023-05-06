#include <stdio.h>
#include <string.h>
int main()
{
    // char name[6] = {'M', 'a', 'm', 'o','o','n'}; //have to \0 at the end of the string to avoid garbage value print
    char name[] = "Mamoon"; // initializing this way will add \n in the end of the string automatically
    // printf("%s", name);
    char name_input[10];
    // input with scanf
    // scanf("%s", name_input);
    // input with gets
    // gets(name_input);
    // input with fgets
    fgets(name_input, 5, stdin); // fgets takes Enter as string
    printf("%s", name_input);
}