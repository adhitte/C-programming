#include<stdio.h>

int main()
{
    int n, i, j, k, choice;

    printf("Enter order of matrix (n): ");
    scanf("%d", &n);

    int a[n][n], b[n][n], c[n][n];

    printf("Enter elements of Matrix A:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("\nMatrix A:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)            printf("%d ",a[i][j]);
        printf("\n");
    }

    printf("Enter elements of Matrix B:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);

    printf("\nMatrix B:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)            printf("%d ",b[i][j]);
        printf("\n");
    }

    printf("\n-------Menu-------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Transpose\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: // Addition
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    c[i][j]=a[i][j]+b[i][j];

            printf("\nSum of matrices:\n");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++)
                    printf("%d ",c[i][j]);
                printf("\n");
            }
            break;

        case 2: // Subtraction
            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    c[i][j]=a[i][j]-b[i][j];

            printf("\nDifference of matrices:\n");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++)
                    printf("%d ",c[i][j]);
                printf("\n");
            }
            break;

        case 3: // Multiplication
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    c[i][j]=0;
                    for(k=0;k<n;k++)
                        c[i][j]+=a[i][k]*b[k][j];
                }
            }

            printf("\nProduct of matrices:\n");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++)
                    printf("%d ",c[i][j]);
                printf("\n");
            }
            break;

        case 4: // Transpose
            printf("\nTranspose of Matrix A:\n");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++)
                    printf("%d ",a[j][i]);
                printf("\n");
            }

            printf("\nTranspose of Matrix B:\n");
            for(i=0;i<n;i++){
                for(j=0;j<n;j++)
                    printf("%d ",b[j][i]);
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}


    