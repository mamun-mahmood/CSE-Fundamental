#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

char* solve (int K, char S) {
   // Write your code here
   printf("k is %d \n S is %s", K, S);
   return 0;

}

int main() {
    int T;
    scanf("%d", &T);
    for(int t_i = 0; t_i < T; t_i++)
    {
        int K;
        scanf("%d", &K);
        char S[100];
        scanf("\n%s", &S);
        char* out_ = solve(K, S);
        //printf("%s", out_);
        //printf("\n");
    }
}
