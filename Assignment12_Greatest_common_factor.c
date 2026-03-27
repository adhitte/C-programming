#include<stdio.h>
int main()
{
    int a,b,i,gcd=0,min;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a<b)
        min=a;
    else
        min=b;

    for(i=2;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("Greatest common factor of %d and %d is: %d",a,b,gcd);
    return 0;
}   

    
   