#include<stdio.h>
int main()
{
    int a;
    int p;
    printf("Enter percentage: ");
    scanf("%d",&a);
    
    if(a>=90)
    {
        p=10;
    }
    else if(a>=80)
    {
        p=9;
    }
    else if(a>=70)
    {
        p=8;
    }
    else if(a>=60)
    {
        p=7;
    }
    else if(a>=50)
    {
        p=6;
    }
    else
    {
        p=5;
    }

    printf("The grade point is: %d\n",p);
    return 0;

    
}