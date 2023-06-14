#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    scanf("%lf", &x);
    int ceiled = ceil(x);
    // rounds up to the nearest integer
    int floored = floor(x);
    // rounds down to the nearest integer
    int rounded = round(x);
    // rounds to the nearest integer (up or down)
    int root = sqrt(x);
    // returns the square root of x

    printf("%d", root);
    return 0;
}
// Path: Intoduction to C Programming/ceil.c