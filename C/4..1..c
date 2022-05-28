#include<stdio.h>
#define size 8
int main()
{
    int num,i;
    printf("Enter a number");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
    {
        printf("This number is divisible by 5 and 11");
    }
    else
    {
        printf("Not divisible by 5");
    }
    return 0;
}
