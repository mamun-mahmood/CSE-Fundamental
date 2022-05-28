#include<stdio.h>
int main()
{
    int marks,i,count=0;
    int total_marks[]={50,55,60,65,50,65,55,70,80,70};
    int marks_count[11];
    for(i=0;i<=11;i++);
        {
            marks_count[i]=0;
        }
        for(i=0;i<10;i++)
        {
            marks_count[total_marks[i]]++;
        }
        for(i=50;i<=100;i++)
        {
            printf("Marks:%d\tCount:%d\n",i,marks_count[i]);
        }
return 0;
}
