#include<stdio.h>
int main()
{
    int x,row,col;
    printf("Enter number of row");
    scanf("%d",&x);
    for(row=1;row<=x;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",row);
        }
        printf("\n");
    }
    return 0;
}
