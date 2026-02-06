#include <stdio.h>

int main() {
    int num, original, temp, rem;
    int digits = 0;
    int sum = 0;
    int power, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp > 0) {
        rem = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++) {
            power *= rem;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong Number\n", original);
    else
        printf("%d is not an Armstrong Number\n", original);

    return 0;
}
