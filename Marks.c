#include <stdio.h>

int main() {
    int marks[5], i;
    int total = 0;
    float average;
    int fail = 0;

    printf("Enter marks for 5 subjects:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] < 40) {
            fail = 1;
        }
        total += marks[i];
    }

    average = total / 5.0;

    if (fail) {
        printf("Result: FAIL\n");
    } else {
        printf("Aggregate: %.2f%%\n", average);

        if (average > 75)
            printf("Grade: DISTINCTION\n");
        else if (average >= 60)
            printf("Grade: FIRST DIVISION\n");
        else if (average >= 50)
            printf("Grade: SECOND DIVISION\n");
        else
            printf("Grade: THIRD DIVISION\n");
    }

    return 0;
}


