#include <stdio.h>
#include <string.h>
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 0, 1, 2, 3, 4, };
    int count[7] = {0};
    for (int i = 0; i < 11; i++)
    {
        int val=arr[i];
        count[val]++;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d - %d \n", i,count[i]);
    }
}