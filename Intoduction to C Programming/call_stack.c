#include <stdio.h>
void world_print(void)
{
    printf("World stack 3\n");
}
void hello_print(void)
{
    printf("Hello start stack 2\n");
    world_print();
    printf("Hello end stack 4\n");
}

int main()
{
    printf("Start stack 1 \n");
    hello_print();
    printf("End stack 5 ");
    return 0;
}