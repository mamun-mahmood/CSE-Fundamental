#include<stdio.h>
int main()
{
    int num,i,count;
    printf("Prime number between 1-100 are:\n");
    for(num=1;num<=100;num++)
    {
       for(i=1;i<num;i++)
       {   count=   0;
           if(num%i==0)
           {
               count++;
               break;
           }
       }
       if(count==0)
       {
           printf("%d\n",num);
       }
    }
}
