#include <stdio.h>
int main()
{
    int worker_1, worker_2, days, result;
    scanf("%d %d %d", &worker_1, &worker_2, &days);
    result = (worker_1 * days) / worker_2;
    printf("%d", result);
}