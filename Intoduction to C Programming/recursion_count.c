#include <stdio.h>
void recursion_count(int count)
{
    if (count >= 10)
        return;
    printf("%d Recursing\n", count);
    // function will call 100 times in recursive way
    recursion_count(count + 1);
}
int main()
{
    recursion_count(1);
    return 0;
}