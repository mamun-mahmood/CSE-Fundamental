#include <stdio.h>
int total_sum(int arr[],int array_size){
    if(array_size == 0) return 0;
    return arr[array_size - 1] + total_sum(arr, array_size - 1);
}
int main() {
    int array_size;
    scanf("%d\n", &array_size);
    int array[array_size];
    for (int i = 0; i < array_size; i++)
    {
        scanf("%d ", &array[i]);
    }
    int sum = total_sum(array, array_size);
    printf("%d ", sum);

  return 0;
}
