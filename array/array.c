#include<stdio.h>
void main()
{
    int a[3],b[3],c[3],i;
    printf("Enter Three numbers ");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter Another Three numbers ");
    for(i=0;i<=2;i++)
    {   
        scanf("%d",&b[i]);
    }
    for(i=0;i<=2;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("The Resultant Array is ");
    for(i=0;i<=2;i++)
    {
        printf("\n c[%d]=%d",i,c[i]);

    }
}
