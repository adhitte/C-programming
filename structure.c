#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
int main()
{
    struct student s1;
    printf("Enter name, roll and marks: ");
    scanf("%s %d %f", s1.name, &s1.roll, &s1.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s1.name, s1.roll, s1.marks);
    
    struct student s2;
    printf("Enter name, roll and marks: ");
    scanf("%s %d %f", s2.name, &s2.roll, &s2.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s2.name, s2.roll, s2.marks);
    
    struct student s3;
    printf("Enter name, roll and marks: ");     
    scanf("%s %d %f", s3.name, &s3.roll, &s3.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s3.name, s3.roll, s3.marks);

    struct student s4;
    printf("Enter name, roll and marks: ");
    scanf("%s %d %f", s4.name, &s4.roll, &s4.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s4.name, s4.roll, s4.marks);

    struct student s5;
    printf("Enter name, roll and marks: ");
    scanf("%s %d %f", s5.name, &s5.roll, &  s5.marks);
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s5.name, s5.roll, s5.marks);

        return 0;
}
