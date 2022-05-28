#include <stdio.h>
#define MAX_SIZE 100       // Maximum array size
int main()
{
    int arr[MAX_SIZE], reverse[MAX_SIZE];
    int size, i, arrIndex, revIndex;
    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &size);
    /* Input array elements */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    revIndex = 0;

    arrIndex = size -1;
    while(arrIndex >= 0)
    {
        /* Copy value from original array to reverse array */
        reverse[revIndex] = arr[arrIndex];

        revIndex++;
        arrIndex--;
    }
    /*
     * Print the reversed array
     */
    printf("\nReversed array : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", reverse[i]);
    }
    return 0;
}
