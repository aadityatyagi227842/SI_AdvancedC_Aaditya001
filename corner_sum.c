#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);
    if (n<2) {
        printf("Matrix size must be at least 2x2 to have distinct corner elements.\n");
        return 0;
    }
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
         {
            scanf("%d",&matrix[i][j]);
        }
    }
    int diagonal_sum=0;
    for(int i=0;i<n;i++)
     {
        diagonal_sum += matrix[i][i];
        if(i != n-1-i)
        {
            diagonal_sum += matrix[i][n-1-i];
        }
    }
    int corner_sum = matrix[0][0];
                     matrix[0][n-1];
                     matrix[n-1][0];
                     matrix[n-1][n-1];
    printf("\nSum of all diagonal elements: %d", diagonal_sum);
    printf("\nSum of corner elements: %d\n", corner_sum);
    if (diagonal_sum == corner_sum) {
        printf("sum of all diagonals is equal to the sum of corner elements\n");
    }
    else
        {
        printf("sum of all diagonals is not equal to the sum of corner elements\n");
    }
    return 0;
}
