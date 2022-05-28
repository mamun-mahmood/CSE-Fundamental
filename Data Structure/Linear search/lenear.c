#include <stdio.h>
struct student
{
    char name[65];
    int roll;
    float marks;
};
struct student s1,s2;
int main()
{
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("Enter name: ");
    scanf("%s", s2.name);
    printf("Enter roll number: ");
    scanf("%d", &s2.roll);
    printf("Enter marks: ");
    scanf("%f", &s2.marks);
    printf("Displaying Information:\n");
    printf("Name: ");
    puts(s1.name);
    printf("Roll number: %d\n",s1.roll);
    printf("Marks: %.1f\n", s1.marks);
    printf("Name: ");
    puts(s2.name);
    printf("Roll number: %d\n",s2.roll);
    printf("Marks: %.1f\n", s2.marks);

    return 0;
}
