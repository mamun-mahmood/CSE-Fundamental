#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    // arr is the pointer of arr[0]
    printf("Address of arr: %p\n", &arr);
    printf("Address of arr[0]: %p\n", &arr[0]);
    // array element can be accessed also like
    printf("Value of arr[1]: %d\n", *(arr + 1));
    // or like this
    printf("Value of arr[2]: %d\n", 2 [arr]);

    return 0;
}