#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        for (int s = 0; s < i; s++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}