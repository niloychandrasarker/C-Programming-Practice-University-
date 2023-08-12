/*16. Write a program that display Pascal pyramid
             1
           1   1
         1   2   1
       1   3   3   1
     1   4   6   4   1
*/
#include <stdio.h>
int main() 
{
    int rows;

    // Input the number of rows for Pascal's pyramid
    printf("Enter the number of rows for Pascal's pyramid: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) 
    {
        int number = 1;

        // Print spaces for formatting
        for (int space = 1; space <= rows - i; space++) 
        {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) 
        {
            printf("%4d", number);
            number = number * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
