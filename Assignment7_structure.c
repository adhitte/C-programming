#include <stdio.h>

struct student {
    char name[20];
    int roll;
    float marks;
}; 

int main()
{
    struct student students[50];
    
    for(int i = 0; i < 3; i++)
    {
        
        printf("Enter name, roll and marks of student %d: ", i + 1);
        
        
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
        
        printf("Name: %s\nRoll: %d\nMarks: %.2f\n\n", 
                students[i].name, students[i].roll, students[i].marks);
    }
    
    return 0;
}