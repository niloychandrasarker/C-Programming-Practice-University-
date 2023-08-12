#include <stdio.h>
int main() 
{
    int rows, cols;

    // Input the dimensions of the matrices
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols], product[rows][cols];

    // Input values for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input values for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the matrices element-wise
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Multiply the matrices
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            product[i][j] = 0;
            for (int k = 0; k < cols; k++) 
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the sum matrix
    printf("Sum of the matrices:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Display the product matrix
    printf("Product of the matrices:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
