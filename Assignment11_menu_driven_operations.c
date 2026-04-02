#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;
    long long factorial = 1;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square root: %.2f\n", sqrt(num));
    printf("Square = %d\n", num * num);
    printf("Cube = %d\n", num * num * num);

    // Prime check
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    printf("The number is %sprime.\n", isPrime ? "" : "not ");

    // Factorial
    for (i = 1; i <= num; i++) {
        factorial *= i;
    }
    printf("Factorial = %lld\n", factorial);

    // Prime factors
    printf("Prime Factors: ");
    temp = num;  // preserve original number
    for (i = 2; i <= temp; i++) {
        while (temp % i == 0) {
            printf("%d ", i);
            temp /= i;
        }
    }
    printf("\n");

    return 0;
}