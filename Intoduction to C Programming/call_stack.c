#include <stdio.h>
void world_print(void)
{
    printf("World sttack 3\n");
}
void hello_print(void)
{
    printf("Hello stack 2\n");
}

int main()
{
    printf("Start stack 1 \n");
    hello_print();
    world_print();
    printf("End stack 4 ");
    return 0;
}