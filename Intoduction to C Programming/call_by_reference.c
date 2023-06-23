#include <stdio.h>
void sum(int *a, int *b)
// receiving memory addresses of a and b
{
    // sum of a and b by addresses of a and b
    printf("%d", *a + *b);
    // if we change value of a or b here like this
    *a = 5;
    // or
    *b = 12;
    // this will change the value of a, b in main function also
}
int main()
{
    int a = 10, b = 20;
    // calling sum function with a and b values
    sum(&a, &b);
    // here the value of a and b will be 5 and 12 after the sum function call
    printf("\n%d %d", a, b);
}