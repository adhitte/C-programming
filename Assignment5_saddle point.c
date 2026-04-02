#include <stdio.h>
int main() {
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
    for(i=0;i<n;i++)
    {
        int min = matrix[i][0];
        for(j=1;j<n;j++)
        {
            if (matrix[i][j]<min)
            {
                min = matrix[i][j];
            }
        }

        int max = matrix[i][0];
        for(j=1;j<n;j++)
        {
            if (matrix[i][j]>max)
            {
                max = matrix[i][j];
            }
        }
            if(min == max)
            {
                printf("Saddle point found at position (%d,%d) with value %d\n", i, j, min);
            }
        }
        
        printf("No saddle point found\n");
        return 0;
    }
    
    