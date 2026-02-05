#include <stdio.h>

int main() {
    int choice, i;
    float a, b, result;
    int num, fact;

    while (1) {
        printf("\n--- SIMPLE CALCULATOR ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x^y)\n");
        printf("6. Factorial\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting program...\n");
            break;
        }

        if (choice == 6) {
            printf("Enter a number: ");
            scanf("%d", &num);

            fact = 1;
            for (i = 1; i <= num; i++) {
                fact *= i;
            }

            printf("Factorial = %d\n", fact);
        }

        else {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);

            if (choice == 1) {
                result = a + b;
                printf("Result = %.2f\n", result);
            }
            else if (choice == 2) {
                result = a - b;
                printf("Result = %.2f\n", result);
            }
            else if (choice == 3) {
                result = a * b;
                printf("Result = %.2f\n", result);
            }
            else if (choice == 4) {
                if (b != 0) {
                    result = a / b;
                    printf("Result = %.2f\n", result);
                } else {
                    printf("Error: Division by zero\n");
                }
            }
            else if (choice == 5) {
                int exponent = (int)b;
                result = 1;

                for (i = 1; i <= exponent; i++) {
                    result *= a;
                }

                printf("Result = %.2f\n", result);
            }
            else {
                printf("Invalid choice\n");
            }
        }
    }

    return 0;
}
