#include<stdio.h>
int main(void)
{
    int num,count,i=3;
    for(num=1;num<=100;num++)
        count=0;
        if(num%i==0)
        {
            count++;
            break;
        }

    if(count==0)
    {
        printf("%d\n",num);
    }
    return 0;
}
