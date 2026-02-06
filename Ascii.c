#include<stdio.h>
int main()
{
printf("Enter Ascii value: ");
int a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
printf(" %c %c %c %c\n", a, b, c, d, (char)a, (char)b, (char)c, (char)d);
return 0;
}