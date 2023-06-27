#include <stdio.h>
void recursion_count(int count)
{
    printf("%d Recursing\n", count);
    count++;
    // function will call 100 times in recursive way
    if (count != 100)
    {
        recursion_count(count);
    }
}
int main()
{
    int count = 1;
    recursion_count(count);
    return 0;
}