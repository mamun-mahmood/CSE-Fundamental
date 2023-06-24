#include <stdio.h>
int has_return_parameter(int p)
{
    return p;
}
int has_return_no_parameter(void)
{
    return 10;
}
void no_return_parameter(int p)
{
}
void no_return_no_parameter(void)
{
}
int main()
{
    int result1 = has_return_parameter(5);
    // returns value
    printf("Result 1: %d\n", result1);
    // returns something from function body
    int result2 = has_return_no_parameter();
    printf("Result 2: %d\n", result2);
    // doesn't return anything but takes parameter
    no_return_parameter(10);
    // no return no parameter
    no_return_no_parameter();
    return 0;
}