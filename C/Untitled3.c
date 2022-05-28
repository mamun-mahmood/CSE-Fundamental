#include<stdio.h>
int main()
{
    int ara[]={2,4,3,5,9,7,10,11,13,25,20};
    int i,d,count;
    for (i=0;i<=10;i++)
    {
        for(d=1;d<ara[i];d++)
        {   count=0;
            if(ara[i]%d==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("%d",ara[i]);
        }
    }

}
