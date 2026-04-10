#include<stdio.h>
int main()
{
    int n,i,sign=1;
    float x,term,sum;

    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    sum=0;
    term=x;

    for (i = 1; i < n; i++)
    {
        sign = -sign;
        term *= x * x / (2 * i - 1) / (2 * i);
        sum += sign * term;
    }

    printf("The value of sin(%.2f) using %d terms is: %.4f\n", x, n, sum);
    return 0;
}