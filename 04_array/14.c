//14. Write a program that multiplies two matrices.
#include <stdio.h>
int main() 
{
    int rows1, cols1, rows2, cols2;

    // Input the dimensions of the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    // Input the dimensions of the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    if (cols1 != rows2) 
    {
        printf("Matrix multiplication is not possible.\n");
        return 1; // Exit with an error code
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];

    // Input values for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols1; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input values for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows2; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply the matrices
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            product[i][j] = 0;
            for (int k = 0; k < cols1; k++) 
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the product matrix
    printf("Product of the matrices:\n");
    for (int i = 0; i < rows1; i++) 
    {
        for (int j = 0; j < cols2; j++) 
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
