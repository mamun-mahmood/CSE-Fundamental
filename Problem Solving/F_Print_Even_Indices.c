#include <stdio.h>

int main() {
    int array_size;
    scanf("%d", &array_size);
    int array[array_size];
    for (int i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = array_size-1; i >=0; i--)
    {
        if (i%2==0)
        {
            printf("%d ", array[i]);
        }
        
    }
    
  return 0;
}