#include<stdio.h>
int main()
{
    int ft_marks[]={80,85,95,89,91,82,95,87,90,88},
        st_marks[]={85,83,78,85,84,80,89,87,85,83},
     final_marks[]={91,92,83,85,86,77,88,92,85,86},
      i,marks;
     double total_marks[10];
     for(i=0;i<=10;i++)
     {
        total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
     }
     for(i=0;i<10;i++)
     {
         printf("Roll No:%d\tTotal Marks:%0.3lf\n",i+1,total_marks[i]);
     }
     return 0;
}
