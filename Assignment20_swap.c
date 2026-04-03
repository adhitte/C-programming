#include<stdio.h>

// Function to swap by value (Does not affect main)
void swapvalue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapvalue: a=%d, b=%d\n", a, b);
}

// Function to swap by reference (Affects main)
void swapreference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapreference: a=%d, b=%d\n", *a, *b);
}

int main() {
    int x, y, ch;
    printf("Enter two numbers:\n");
    scanf("%d%d", &x, &y);

    printf("\nChoose method:\n");
    printf("1.Swap by value\n");
    printf("2.Swap by reference\n");
    printf("Enter your choice:\n");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            swapvalue(x, y);
            printf("After swapping by value: x=%d, y=%d\n", x, y);
            break;
        case 2:
            swapreference(&x, &y);
            printf("After swapping by reference: x=%d, y=%d\n", x, y);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

