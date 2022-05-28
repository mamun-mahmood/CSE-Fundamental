#include<stdio.h>
int main()
{
    int marks,i,count=0;
    int total_marks[]={50,55,60,65,50,65,55,70,80,70};
    for(marks=50;marks<=100;marks++)
    {
        for(i=0;i<=10;i++);
        {
            if(total_marks[i]==marks)
            {
                count++;
            }
        }
        printf("Marks:%d\tCount:%d\n",marks,count);
    }
return 0;
}
