#include<stdio.h>
int main()
{
    int ara[]={10,20,30,46,55,77,88,99};
    int i,n=5,count=0;
    for(i=0;i<8;i++)
    {
        if(ara[i]%n==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
