#include <stdio.h>
int main()
{
    int x = 10;
    printf("%p\n", &x);
    // reference operator
    int *ptr_of_x = &x;
    printf("%d\n", sizeof(ptr_of_x));
    // dereference operator
    printf("%d\n", *ptr_of_x);
    // overwriting the value of x
    *ptr_of_x = 20;
    printf("%d\n", x);
}