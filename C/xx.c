//C program to print array in reverse order
#define Max_size 100
#include <stdio.h>

int main()
{
    int array[Max_size];
    int size, i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements in array: \n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Reversed element: \n");
    for(i = size-1; i>=0; i--)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}
