#include<stdio.h>
int main()
{
    int n, i, j;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    float inverse[n][n];
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            inverse[i][j] = 0;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i == j)
            {
                inverse[i][j] = 1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j] == 0)
            {
                continue;
            }
            else
            {
                int factor = matrix[i][j];
                for(int k=0;k<n;k++)
                {
                    matrix[i][k] = matrix[i][k]/factor;
                    inverse[i][k] = inverse[i][k]/factor;
                }
                for(int l=0;l<n;l++)
                {
                    if(l != i)
                    {
                        int factor2 = matrix[l][j];
                        for(int m=0;m<n;m++)
                        {
                            matrix[l][m] = matrix[l][m] - factor2*matrix[i][m];
                            inverse[l][m] = inverse[l][m] - factor2*inverse[i][m];
                        }
                    }
                }
            }
        }
    }
    printf("Inverse matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%f ", inverse[i][j]);
        }
        printf("\n");
    }
    return 0;
}