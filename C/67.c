#include<stdio.h>
int main()
{
   int ft_marks[40]={82,86,97,95,93,95,86,52,49,41,42,47,90,59,63,86,40,46,
                      92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,59,67,53,56,72,62},
       st_marks[40]={86,82,98,87,89,50,80,46,78,65,45,68,79,78,87,65,77,66,
                     55,77,89,90,67,87,65,45,65,44,50,78,90,87,78,67,56,45,67,65,66,78},
    final_marks[40]={87,98,67,87,69,65,98,67,86,78,95,86,97,86,97,86,56,55,
                     66,77,87,67,56,45,54,65,56,76,78,87,67,67,87,98,85,87,77,65,56,76};
                     int i;
                     double total_marks[40];
                     for(i=0;i<40;i++)
                     {
                         total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
                     }
                     for(i=1;i<=40;i++)
                     {
                         printf("Roll NO:%d\t\t total marks:%0.0lf\n",i,total_marks[i-1]);
                     }
return 0;
}