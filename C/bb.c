/*Program to replace EVEN elements by 0 and ODD elements by 1.*/
#include <stdio.h>
void readArray(int arr[], int size)
{
    int i =0;

    printf("\nEnter elements : \n");

    for(i=0; i < size; i++)
    {
        printf("Enter arr[%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
}
void printArray(int arr[], int size)
{
    int i =0;

    printf("\nElements are : ");

    for(i=0; i < size; i++)
    {
        printf("\n\tarr[%d] : %d",i,arr[i]);
    }
    printf("\n");
}
void replaceEvenOdd(int arr[], int size)
{
    int i=0;

    for(i=0; i < size; i++)
    {
        if( arr[i] % 2 == 0 )
            arr[i] = 0 ;
        else
            arr[i] = 1 ;
    }
}

int main()
{
    int arr[10];

    readArray(arr,10);

    printf("\nBefore replacement : ");
    printArray(arr,10);

    replaceEvenOdd(arr,10);

    printf("\nAfter replacement : ");
    printArray(arr,10);

    return 0;
}

