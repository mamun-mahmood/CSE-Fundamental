#include <stdio.h>
void print_array(int arr[], int i){
    if(i==5) return;
    printf("%d\n", arr[i]);
    i++;
    print_array(arr,i);
}
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    print_array(arr, 0);
  return 0;
}