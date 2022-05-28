#include<stdio.h>
int main()
{
    int i,count,num,*numptr;
    printf("Prime number from 1 to 100 are:\n");
    for(num=1;num<=100;num++)
    {
        count=0;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
    if(count==0)
    {
        printf("%d\n",num);
    }
    }
}
