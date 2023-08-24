/*6. Write a C program to convert Decimal to Binary number system using
Recursion.*/
#include <stdio.h>

void decimalToBinaryRecursive(int n) 
{
    if (n > 0) 
    {
        decimalToBinaryRecursive(n / 2);
        printf("%d", n % 2);
    }
}

int main() 
{
    int decimalNum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    if (decimalNum < 0) 
    {
        printf("Please enter a non-negative integer.\n");
    } 
    else 
    {
        printf("Binary representation of %d is ", decimalNum);
        decimalToBinaryRecursive(decimalNum);
        printf("\n");
    }

    return 0;
}
