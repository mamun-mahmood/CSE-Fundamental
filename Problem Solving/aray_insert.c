#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int insert_index;
    scanf("%d", &insert_index);
    // update arr
    for(int i=insert_index; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    for(int i=0; i<n-1; i++) {
        printf("%d ", arr[i]);
    }

}