#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num, pseudo_num;
    srand(time(0)); 
    printf("Enter a number: ");
    scanf("%d", &num);
    pseudo_num = (num * rand()) % 100; 

    printf("Pseudo-random number generated: %d\n", pseudo_num);
    return 0;
}   