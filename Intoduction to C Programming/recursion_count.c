#include <stdio.h>
void recursion_count(long int count)
{
    if (count >= 100000)
        return;
    printf("%ld Recursing\n", count);
    // function will call 100 times in recursive way
    recursion_count(count + 1);
}
int main()
{
    recursion_count(1);
    return 0;
}