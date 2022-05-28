#include<stdio.h>
#include<conio.h>
int find_max(int ara[],int n);
int main()
{
    int ara[]={-10,0,53,22,83,23,89,132,201,3,85};
    int n=11;
    int max=find_max(ara,n);
    clrscr();
    printf("%d\n",max);
    return 0;
}
int find_max(int ara[],int n)
{
int max=ara[0];
int i;
for(i=1;i<n;i++)
{
    if(ara[i]>max)
    {
        max=ara[i];
    }
}
return max;
}
