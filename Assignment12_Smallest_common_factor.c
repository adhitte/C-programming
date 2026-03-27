#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    for(i=2;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            printf("Smallest common factor of %d and %d is: %d",a,b,i);
            break;
        }
    }
    return 0;
}