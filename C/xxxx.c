#include<stdio.h>
#define Max_size 10
int main()
{
    int ara[Max_size];
    int i,n,d;
    printf("Enter size of the array:");
    scanf("%d",&n);
    printf("Enter %d element of array:\n",n+1);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&ara[i]);
    }
    printf("Enter the specific number:");
    scanf("%d\n",&d);
    int count;
    for(i=0;i<n;i++)
    {
        if(ara[i]%d==0)
        {
            count++;
        }
    printf("%d",count);
    }
    return 0;
}
