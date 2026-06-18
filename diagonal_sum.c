#include <stdio.h>
int main()
 {
    int n;
    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d",&n);
    if  (n <= 0) {
        printf("Invalid matrix size.\n");
        return 1;
    }
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    int diagonal_sum = 0;
    int boundary_sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
         {
            if(i==j || i+j==n-1)
             {
                diagonal_sum += matrix[i][j];
            }
            if(i==0 || i==n-1 || j==0 || j==n-1)
             {
                boundary_sum += matrix[i][j];
            }
        }
    }
    printf("\n Sum of all diagonal elements: %d\n",diagonal_sum);
    printf("Sum of all boundary elements: %d\n",boundary_sum);
    if (diagonal_sum == boundary_sum)
    {
        printf("sum of diagonal elements is equal to the boundary elements\n");
    }
    else
    {
        printf("sum of diagonal elements is not equal to the boundary elements\n");
    }
    return 0;
}
