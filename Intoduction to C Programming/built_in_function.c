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
    printf("%d", ceiled);
    return 0;
}
// Path: Intoduction to C Programming/ceil.c