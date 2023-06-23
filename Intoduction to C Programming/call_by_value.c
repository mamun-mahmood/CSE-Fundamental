#include <stdio.h>
void sum(int a, int b)
// receiving a and b but this creates two new variable
{
    // sum of a and b
    printf("%d", a + b);
    // if we change value of a or b here like this
    a = 5;
    // or
    b = 12;
    // this will not change the value of ab or b in the main functin as these are diffrent variable that just assigned the value of a, b from the main function call
}
int main()
{
    int a = 10, b = 20;
    // calling sum function with a and b values
    sum(a, b);
}