//25. Write a program in C which is a Menu-Driven Program to perform a simple calculation.
#include <stdio.h>
int main() 
{
    int choice, num1, num2, result;

    printf("Menu:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (choice) 
    {
        case 1:
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case 4:
            if (num2 != 0)
             {
                result = num1 / num2;
                printf("Result: %d\n", result);
            } 
            else 
            {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
