#include<stdio.h>
int main()
{
   int ch,a,b;
    printf("------Menu------\n");
    printf("Addition - 1\n");
    printf("Subtraction - 2\n");
    printf("Multiplication - 3\n");
    printf("Division - 4\n");
    printf("Modulus - 5\n");
    printf("Enter your choice: \n");
    scanf("%d",&ch);
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1:
            printf("You selected Addition.\n");
            printf("Result: %d\n",a+b);
            break;
        case 2:
            printf("You selected Subtraction.\n");
            printf("Result: %d\n",a-b);
            break;
        case 3:
            printf("You selected Multiplication.\n");
            printf("Result: %d\n",a*b);
            break;
        case 4:
            printf("You selected Division.\n");
            printf("Result: %d\n",a/b);
            break;
        case 5:
            printf("You selected Modulus.\n");
            printf("Result: %d\n",a%b);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}