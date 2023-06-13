#include <stdio.h>
int sum(int resutlt_count)
{
    int a, b;
    printf("Enter two number...\n");
    scanf("%d %d", &a, &b);
    printf("Result %d: %d \n", resutlt_count,a + b);
    resutlt_count++;
}
int main()
{
    int resutlt_count=1;
    sum(resutlt_count);
    sum(resutlt_count);
    sum(resutlt_count);
    sum(resutlt_count);
}