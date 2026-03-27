#include<stdio.h>
struct EMPLOYEE
{
    char name[20];
    char designation[20];
    char gender;
    int date_of_joining;
    int salary;
};
int main()
{
    struct EMPLOYEE emp[50];
    int i, male=0, female=0;
    for(i=0; i<3; i++)
    {
        printf("Enter name, designation, gender, date of joining and salary of employee %d: ", i + 1);
        scanf("%s %s %c %d %d", emp[i].name, emp[i].designation, &emp[i].gender, &emp[i].date_of_joining, &emp[i].salary);
        if(emp[i].gender == 'M' || emp[i].gender == 'm')
            male++;
        else
            female++;
    }
    printf("Number of male employees: %d\n", male);
    printf("Number of female employees: %d\n", female);
    printf("Salary>10000:\n");
    for(i=0; i<3; i++)
    {
        if(emp[i].salary > 10000)
        {printf("%s\n", emp[i].name);}
    }
    printf("Assistant Manager:\n");
    for(i=0; i<3; i++)
    {
        if(strcmp(emp[i].designation, "Assistant Manager") == 0)
        {printf("%s\n", emp[i].name);}
    }
    return 0;

}